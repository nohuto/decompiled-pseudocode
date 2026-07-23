/*
 * XREFs of sub_1800F3B70 @ 0x1800F3B70
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     sub_1800F355C @ 0x1800F355C (sub_1800F355C.c)
 *     sub_1800F36C8 @ 0x1800F36C8 (sub_1800F36C8.c)
 *     sub_1800F3814 @ 0x1800F3814 (sub_1800F3814.c)
 *     sub_1800F3D68 @ 0x1800F3D68 (sub_1800F3D68.c)
 *     sub_1800F3E58 @ 0x1800F3E58 (sub_1800F3E58.c)
 */

__int64 __fastcall sub_1800F3B70(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  ULONG_PTR v8; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v9[2]; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  result = 0LL;
  v8 = 0x10000LL;
  v9[0].QuadPart = 0LL;
  if ( !byte_18015D810 )
  {
    if ( byte_1801597A1 )
    {
      byte_1801597A1 = 0;
      _InterlockedExchange(&dword_18015D814, 1);
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &qword_18015D7F0,
             0LL,
             0LL,
             v9,
             &v8,
             ViewShare,
             0,
             4u) < 0 )
        return 0LL;
      if ( !qword_18015D7F0 )
        return 0LL;
      *((_DWORD *)qword_18015D7F0 + 12) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !sub_1800F36C8() )
        return 0LL;
      a3 = (unsigned __int64)Src;
    }
    if ( qword_18015D7F0 )
    {
      if ( a2 )
      {
        v7 = sub_1800F3814((a3 >> 3) | 0xE000000000000000uLL);
        if ( (unsigned __int8)sub_1800F3D68(0x20uLL, &Src, 8uLL) && v7 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
            Src,
            a4,
            (const void *)(v7 + 24),
            *(unsigned __int16 *)(v7 + 16));
        }
        return 0LL;
      }
      sub_1800F355C();
      if ( !*((_DWORD *)qword_18015D7F0 + 15) )
        goto LABEL_18;
      if ( (unsigned __int8)sub_1800F3E58() )
      {
        *((_DWORD *)qword_18015D7F0 + 15) = 0;
        dword_1801597A4 = 0;
LABEL_18:
        sub_1800F3E58();
      }
    }
    return 0LL;
  }
  return result;
}
