/*
 * XREFs of ValidateCoordinatedState @ 0x1C002A06C
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C0031DCC (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidateCoordinatedState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  char v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r10
  _BYTE *v11; // rcx
  bool v12; // zf
  _BYTE v14[176]; // [rsp+30h] [rbp-D8h] BYREF

  v3 = 224LL * a2 + a1;
  KeCopyAffinityEx(v14, &unk_1C00198C8);
  v4 = *(_DWORD *)(v3 + 252);
  v5 = 0;
  v6 = 0;
  if ( !v4 )
    goto LABEL_12;
  v7 = v4;
  v8 = (_QWORD *)(*(_QWORD *)(v3 + 264) + 8LL);
  do
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 )
    {
      v10 = v9;
      v11 = (_BYTE *)(*v8 + 2LL);
      do
      {
        v12 = *v11 == 0;
        v11 += 4;
        if ( !v12 )
          v6 = 1;
        --v10;
      }
      while ( v10 );
    }
    v8 += 2;
    --v7;
  }
  while ( v7 );
  if ( v6 )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v3 + 48, &unk_1C00198C8) )
      *(_BYTE *)(v3 + 256) = 1;
  }
  else
  {
LABEL_12:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x57u,
      (__int64)&WPP_43c87aadc204398ca111f18064ed4edf_Traceguids,
      a2);
    return (unsigned int)-1073741811;
  }
  return v5;
}
