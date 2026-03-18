/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00534E4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0053A84 (xxxClientCopyImage.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  __int64 *v1; // rax
  BOOL v3; // ebp
  __int64 v4; // r14
  _QWORD *v5; // rdi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v8; // eax
  int v9; // eax
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(__int64 **)(a1 + 128);
  v3 = *((_WORD *)v1 + 37) != 3;
  if ( v1 )
    v4 = *v1;
  else
    LODWORD(v4) = 0;
  v5 = (_QWORD *)(a1 + 168);
  v11[0] = a1 + 168;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v8 = GetDpiForSystem();
  v9 = GetDpiDependentMetric(20LL, v8);
  v11[1] = xxxClientCopyImage(v4, v3 + 1, v9, DpiDependentMetric, 0x4000);
  result = HMAssignmentLock(v11);
  if ( *v5 )
    *(_WORD *)(a1 + 34) |= 0x20u;
  return result;
}
