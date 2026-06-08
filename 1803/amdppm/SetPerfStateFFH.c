/*
 * XREFs of SetPerfStateFFH @ 0x1C0002C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_xx @ 0x1C0002A4C (WPP_RECORDER_SF_xx.c)
 */

__int64 __fastcall SetPerfStateFFH(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-28h]

  v2 = a2[4];
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v2 )
    v6 = a2[2] | __readmsr(v5) & v2;
  else
    v6 = a2[2];
  __writemsr(v5, v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
  {
    v8 = a2[3];
    if ( v8 )
    {
      v9 = __readmsr(v7);
      v10 = a2[5];
      v11 = (unsigned __int64)HIDWORD(v9) << 32;
      if ( v10 )
        v9 &= v10;
      if ( v9 != v8 )
      {
        WPP_RECORDER_SF_xx((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, 0LL, v8, v13);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v3;
}
