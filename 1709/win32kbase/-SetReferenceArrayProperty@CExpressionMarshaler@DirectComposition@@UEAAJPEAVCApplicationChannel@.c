/*
 * XREFs of ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C002D920
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C013FE48 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // edi
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16; // r14

  WeakReferenceBase = 0;
  *a6 = 0;
  if ( a3 != 20 || !a4 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 24) )
    return (unsigned int)-1073741790;
  v10 = Win32AllocPoolWithQuotaZInit(8 * a5, 0x72774344u);
  *((_QWORD *)this + 24) = v10;
  if ( v10 )
  {
    v13 = 0LL;
    if ( !a5 )
    {
LABEL_10:
      *((_DWORD *)this + 50) = a5;
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      Win32FreePool(a4, v11, v12);
      return (unsigned int)WeakReferenceBase;
    }
    v14 = 0LL;
    while ( 1 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            a2,
                            a4[v14],
                            (struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 24) + 8 * v14));
      if ( WeakReferenceBase < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      v14 = (unsigned int)v13;
      if ( (unsigned int)v13 >= a5 )
        goto LABEL_9;
    }
    if ( (_DWORD)v13 )
    {
      v16 = 0LL;
      do
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *(struct DirectComposition::CWeakReferenceBase **)(v16 + *((_QWORD *)this + 24)));
        v16 += 8LL;
        --v13;
      }
      while ( v13 );
    }
    Win32FreePool(*((_QWORD *)this + 24), v11, v12);
    *((_QWORD *)this + 24) = 0LL;
  }
  else
  {
    WeakReferenceBase = -1073741801;
  }
LABEL_9:
  if ( WeakReferenceBase >= 0 )
    goto LABEL_10;
  return (unsigned int)WeakReferenceBase;
}
