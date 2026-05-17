/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800F3A40
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180069A44 (FindNodeOrParent_0.c)
 *     RealSuccessor @ 0x1800700D8 (RealSuccessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // rsi
  _QWORD *v11; // rbx
  _DWORD *v13; // r14
  __int64 (*v14)(); // r15
  int NodeOrParent_0; // eax
  int v16; // ecx

  v7 = a5;
  v11 = (_QWORD *)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *a5 = 0LL;
    return 0LL;
  }
  v13 = a6;
  v14 = WinSqmCheckEscalationSetString;
  if ( a2 )
    v14 = a2;
  if ( *a6 != *(_DWORD *)(a1 + 64) )
    v11 = 0LL;
  a5 = v11;
  if ( v11 )
    goto LABEL_14;
  NodeOrParent_0 = FindNodeOrParent_0(a1, a7, &a5);
  if ( NodeOrParent_0 == 1 )
  {
    v11 = a5;
LABEL_14:
    if ( a4 )
      v11 = RealSuccessor(v11);
    goto LABEL_16;
  }
  a4 = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v11 = RealSuccessor(a5);
    goto LABEL_14;
  }
  v11 = a5;
LABEL_16:
  if ( !v11 )
    return 0LL;
  while ( 1 )
  {
    v16 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v14)(a1, v11 + 4, a3);
    if ( v16 != -1073741198 )
      break;
    v11 = RealSuccessor(v11);
    if ( !v11 )
      return 0LL;
  }
  *v7 = v11;
  *v13 = *(_DWORD *)(a1 + 64);
  if ( v16 )
    return 0LL;
  return v11 + 4;
}
