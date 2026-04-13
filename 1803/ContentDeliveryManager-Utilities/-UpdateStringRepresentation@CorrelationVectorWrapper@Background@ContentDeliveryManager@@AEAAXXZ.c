/*
 * XREFs of ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x18002C284
 * Callers:
 *     ??0?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ @ 0x18003B7F8 (--0-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18005F224 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     <none>
 */

void __fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation(
        ContentDeliveryManager::Background::CorrelationVectorWrapper *this)
{
  unsigned __int8 *v1; // rdi
  _BYTE *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  const char *v5; // r8
  int v6; // eax
  char *v7; // rcx

  v1 = *(unsigned __int8 **)this;
  v2 = (char *)this + 8;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)this + 136LL), 0LL);
  if ( this != (ContentDeliveryManager::Background::CorrelationVectorWrapper *)-8LL )
  {
    *v2 = 0;
    if ( !memcpy_s((char *)this + 8, v1[130], v1, WORD2(v3)) )
    {
      if ( v3 >= 0 || (_DWORD)v3 )
      {
        v4 = v1[129];
        v5 = "%u!";
        v6 = v1[130] - (_DWORD)v4;
        v7 = &v2[v4];
        if ( v3 >= 0 )
          v5 = "%u";
        sprintf_s(v7, v6, v5, (unsigned int)v3);
      }
      else
      {
        v2[v1[129]] = 33;
        v2[v1[129] + 1] = 0;
      }
    }
  }
}
