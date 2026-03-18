/*
 * XREFs of VidSchiCloseProcessAdapterInfo @ 0x1C0079134
 * Callers:
 *     VidSchTerminateDevice @ 0x1C0078CB0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCloseProcessAdapterInfo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // r8
  __int64 result; // rax
  __int64 i; // r14
  __int64 j; // rbx
  __int64 v9; // rdx
  struct _PCW_INSTANCE *v10; // rcx

  v2 = a2[1];
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  --*v5;
  result = *(_QWORD *)(a1 + 24);
  if ( !**(_DWORD **)(result + 8 * v2) )
  {
    for ( i = 0LL; (unsigned int)i < a2[10]; i = (unsigned int)(i + 1) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520), 0);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a2[16]; j = (unsigned int)(j + 1) )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(struct _PCW_INSTANCE **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v2) + 8 * j + 8) + 216LL);
      if ( v10 )
      {
        PcwCloseInstance(v10);
        v9 = *(_QWORD *)(a1 + 24);
      }
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v9 + 8 * v2) + 8 * j + 8), 0);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 24) + 8 * v2), 0);
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8 * v2) = 0LL;
  }
  return result;
}
