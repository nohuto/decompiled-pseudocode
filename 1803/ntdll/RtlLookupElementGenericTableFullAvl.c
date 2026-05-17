/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x18006C990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  int v4; // ebx
  __int64 i; // rdi
  int v10; // eax
  __int64 v12; // rax

  v4 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_7;
  for ( i = *(_QWORD *)(a1 + 16); ; i = v12 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
    if ( !v10 )
      break;
    if ( v10 != 1 )
    {
      v4 = 1;
      goto LABEL_6;
    }
    v12 = *(_QWORD *)(i + 16);
    if ( !v12 )
    {
      v4 = 3;
      goto LABEL_6;
    }
LABEL_10:
    ;
  }
  v12 = *(_QWORD *)(i + 8);
  if ( v12 )
    goto LABEL_10;
  v4 = 2;
LABEL_6:
  *a3 = i;
LABEL_7:
  *a4 = v4;
  if ( v4 == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
