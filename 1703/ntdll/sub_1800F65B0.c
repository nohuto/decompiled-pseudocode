/*
 * XREFs of sub_1800F65B0 @ 0x1800F65B0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     sub_1800F6208 @ 0x1800F6208 (sub_1800F6208.c)
 *     sub_1800F6374 @ 0x1800F6374 (sub_1800F6374.c)
 *     sub_1800F64C8 @ 0x1800F64C8 (sub_1800F64C8.c)
 *     sub_1800F679C @ 0x1800F679C (sub_1800F679C.c)
 *     sub_1800F68A4 @ 0x1800F68A4 (sub_1800F68A4.c)
 */

__int64 __fastcall sub_1800F65B0(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *Src; // [rsp+20h] [rbp-48h]
  __int64 *v13; // [rsp+28h] [rbp-40h]
  __int64 *v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  const void *v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = (const void *)a3;
  result = 0LL;
  v16 = 0x10000LL;
  v17 = 0LL;
  if ( !byte_18015C7B8 )
  {
    if ( byte_180158E18 )
    {
      byte_180158E18 = 0;
      _InterlockedExchange(dword_18015C474, 1);
      v15 = 1;
      v14 = &v16;
      v13 = &v17;
      Src = 0LL;
      if ( (int)ZwMapViewOfSection() < 0 )
        return 0LL;
      if ( !qword_18015C7A8 )
        return 0LL;
      *(_DWORD *)(qword_18015C7A8 + 48) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !sub_1800F6374() )
        return 0LL;
      a3 = (unsigned __int64)v18;
    }
    if ( qword_18015C7A8 )
    {
      if ( a2 )
      {
        v7 = sub_1800F64C8((a3 >> 3) | 0xE000000000000000uLL);
        if ( (unsigned __int8)sub_1800F679C(0x20uLL, &v18, 8uLL) && v7 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
            v18,
            a4,
            (const void *)(v7 + 24),
            *(unsigned __int16 *)(v7 + 16));
        }
        return 0LL;
      }
      sub_1800F6208();
      if ( !*(_DWORD *)(qword_18015C7A8 + 60) )
        goto LABEL_18;
      if ( (unsigned __int8)sub_1800F68A4(v9, v8, v10, v11, Src, v13, v14, v15) )
      {
        *(_DWORD *)(qword_18015C7A8 + 60) = 0;
        dword_180158E1C = 0;
LABEL_18:
        sub_1800F68A4(v9, v8, v10, v11, Src, v13, v14, v15);
      }
    }
    return 0LL;
  }
  return result;
}
