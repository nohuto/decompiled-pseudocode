/*
 * XREFs of sub_180077744 @ 0x180077744
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     sub_180077930 @ 0x180077930 (sub_180077930.c)
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CAA70 @ 0x1800CAA70 (sub_1800CAA70.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800D3188 (RtlDeCommitDebugInfo_0.c)
 */

__int64 __fastcall sub_180077744(__int64 a1, unsigned int a2, _RTL_DEBUG_INFORMATION *a3)
{
  int v4; // r14d
  int v5; // edi
  int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // r10d
  _RTL_PROCESS_MODULES *v9; // rax
  _RTL_PROCESS_MODULES *v10; // rbx
  int v11; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp+10h] BYREF

  v4 = a1;
  v5 = (a1 == 0 ? 2 : 0) | (a2 >> 6) & 1;
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    v7 = sub_1800CAA70(a1, v5, 0, 0, (__int64)&Size);
  else
    v7 = sub_180077930(a1, v5, 0, 0, (__int64)&Size);
  v8 = v7;
  if ( v7 == -1073741820 )
  {
    v9 = (_RTL_PROCESS_MODULES *)RtlCommitDebugInfo_0(a3, (unsigned int)Size);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, (unsigned int)Size);
      if ( v6 )
        v11 = sub_1800CAA70(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
      else
        v11 = sub_180077930(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
      if ( v11 >= 0 )
      {
        a3->Modules = v10;
        return 0LL;
      }
      RtlDeCommitDebugInfo_0(a3, v10, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
