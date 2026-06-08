/*
 * XREFs of ValidateCoordinatedDependencyOptions @ 0x1C0026394
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C002E4D4 (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 *     ValidateCoordinatedDependencyOptionsPlatform @ 0x1C0026568 (ValidateCoordinatedDependencyOptionsPlatform.c)
 *     ValidateCoordinatedDependencyOptionsProcessor @ 0x1C0026678 (ValidateCoordinatedDependencyOptionsProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptions(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned int v10; // ecx
  char v11; // al
  _BYTE *v12; // rdi
  __int64 v13; // rdx
  bool v14; // zf
  unsigned __int16 v15; // r9
  __int64 v16; // [rsp+28h] [rbp-100h]
  _BYTE v17[16]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v18[176]; // [rsp+50h] [rbp-D8h] BYREF

  v6 = a2;
  v8 = *(_DWORD *)(a5 + 12);
  if ( v8 > a4 )
    KeBugCheckEx(0x143u, 2uLL, 0LL, v8, 0LL);
  if ( !v8 )
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x4Bu,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      a2,
      a3);
    return 3221225485LL;
  }
  KeInitializeAffinityEx(v18);
  if ( *(_QWORD *)(a5 + 16) )
    result = ValidateCoordinatedDependencyOptionsProcessor(v6, a3, a5, (unsigned int)v18, (__int64)v17);
  else
    result = ValidateCoordinatedDependencyOptionsPlatform(a1, v6, a3, a5, (__int64)v18, (__int64)v17);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a5 + 12);
    v11 = 0;
    if ( !v10 )
      goto LABEL_22;
    v12 = (_BYTE *)(a5 + 27);
    v13 = v10;
    do
    {
      if ( *(v12 - 1) )
        v11 = 1;
      v14 = *v12 == 0;
      v12 += 4;
      if ( !v14 )
        v11 = 1;
      --v13;
    }
    while ( v13 );
    if ( v11 )
    {
      if ( v17[0] )
        *(_BYTE *)(224 * v6 + a1 + 48 + 209) = 1;
      if ( !(unsigned int)KeAndAffinityEx(v18, 224 * v6 + a1 + 48, 0LL) )
      {
        KeOrAffinityEx(v18, 224 * v6 + a1 + 48, 224 * v6 + a1 + 48);
        return 0LL;
      }
      v15 = 77;
    }
    else
    {
LABEL_22:
      v15 = 76;
    }
    LODWORD(v16) = v6;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v15,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      v16,
      a3);
    return 3221225659LL;
  }
  return result;
}
