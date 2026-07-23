/*
 * XREFs of sub_180067988 @ 0x180067988
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     sub_180067C7C @ 0x180067C7C (sub_180067C7C.c)
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800906CC (RtlDeCommitDebugInfo_0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D565C @ 0x1800D565C (sub_1800D565C.c)
 */

__int64 __fastcall sub_180067988(__int64 a1, unsigned int a2, _RTL_DEBUG_INFORMATION *a3)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // r10d
  _RTL_PROCESS_MODULES *v9; // rax
  _RTL_PROCESS_MODULES *v10; // rbx
  int v11; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp+10h] BYREF

  v4 = a1;
  v5 = (a2 >> 6) & 1 | (a1 == 0 ? 2 : 0);
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    v7 = sub_1800D565C(a1, v5, 0, 0, (__int64)&Size);
  else
    v7 = sub_180067C7C(a1, v5, 0, 0, (__int64)&Size);
  v8 = v7;
  if ( v7 == -1073741820 )
  {
    v9 = (_RTL_PROCESS_MODULES *)RtlCommitDebugInfo_0(a3, (unsigned int)Size);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, (unsigned int)Size);
      if ( v6 )
        v11 = sub_1800D565C(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
      else
        v11 = sub_180067C7C(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
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
