/*
 * XREFs of sub_1800FEA80 @ 0x1800FEA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x180005740 (RtlQueryHeapInformation.c)
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_1800FEA80(__int64 a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 == 2 )
  {
    v2 = (signed __int32 *)sub_1800093FC(16400LL, 0);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&dword_18015C7C8);
      memset(v2, 0, 0x4010uLL);
      *v3 = v4;
      v5[1] = -1LL;
      LODWORD(v5[0]) = 1;
      v5[3] = v3;
      v5[2] = sub_1800FEB20;
      RtlQueryHeapInformation(0LL, 5, v5, 0x20uLL, 0LL);
      sub_18000913C((int)v3);
    }
  }
}
