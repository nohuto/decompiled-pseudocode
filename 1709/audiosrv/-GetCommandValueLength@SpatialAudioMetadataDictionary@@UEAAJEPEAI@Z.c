/*
 * XREFs of ?GetCommandValueLength@SpatialAudioMetadataDictionary@@UEAAJEPEAI@Z @ 0x1800D8680
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::GetCommandValueLength(
        SpatialAudioMetadataDictionary *this,
        char a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  int *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v10 = *((_DWORD *)this + 33);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = *((_QWORD *)this + 17);
      while ( *(_BYTE *)(v12 + 2 * v11) != a2 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v10 )
          return v7;
      }
      v7 = 0;
      *a3 = *(unsigned __int8 *)(v12 + 2 * v11 + 1);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::GetCommandValueLength");
      v20 = 0;
      v23 = 0;
      v18 = &v14;
      v21 = &v15;
      v14 = 286;
      v19 = 4;
      v15 = -2147024809;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v8, v9, 5u, &pData);
    }
  }
  return v7;
}
