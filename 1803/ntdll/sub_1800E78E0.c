/*
 * XREFs of sub_1800E78E0 @ 0x1800E78E0
 * Callers:
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_18003645C @ 0x18003645C (sub_18003645C.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18004F8A8 @ 0x18004F8A8 (sub_18004F8A8.c)
 *     sub_18004F8DC @ 0x18004F8DC (sub_18004F8DC.c)
 *     sub_18004F96C @ 0x18004F96C (sub_18004F96C.c)
 */

__int64 sub_1800E78E0(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  WCHAR *Heap; // rsi
  int v9; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  BaseAddress = 0LL;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_22;
  }
  v9 = sub_18004F96C(&BaseAddress);
  if ( v9 >= 0 )
  {
    if ( !sub_18004F8DC(a2, (__int64)BaseAddress, a3, a4, 0, 42) )
    {
      v9 = -1073741823;
      goto LABEL_24;
    }
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    if ( !Heap )
    {
      v9 = -1073741801;
      goto LABEL_24;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *((_DWORD *)BaseAddress + 2 * v10 + 1) )
      {
        v11 = *((_WORD *)BaseAddress + 4 * v10);
        if ( v11 )
        {
          String.Buffer = Heap;
          *(_DWORD *)&String.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, &String) )
            goto LABEL_15;
        }
        else
        {
          v12 = *((_WORD *)BaseAddress + 4 * v10 + 1);
          if ( v12 < 0 )
          {
LABEL_15:
            v9 = -1073741595;
LABEL_22:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            break;
          }
          RtlInitUnicodeString(
            &String,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2LL * v12)));
        }
        v9 = sub_18003645C(a1, a3, 0, (__int16 *)va, String.Buffer);
        if ( v9 < 0 )
          goto LABEL_22;
      }
      if ( ++v10 >= 42 )
        goto LABEL_22;
    }
  }
LABEL_24:
  if ( BaseAddress )
    sub_18004F8A8(BaseAddress);
  return (unsigned int)v9;
}
