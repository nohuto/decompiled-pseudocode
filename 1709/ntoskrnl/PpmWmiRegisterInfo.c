/*
 * XREFs of PpmWmiRegisterInfo @ 0x1405DAC24
 * Callers:
 *     PpmWmiDispatch @ 0x1405DABB0 (PpmWmiDispatch.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PpmWmiRegisterInfo(int a1, __int64 a2, unsigned int a3, _DWORD *a4, int *a5)
{
  int v5; // ebx
  __int64 v9; // r8
  int *v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  NTSTATUS v13; // edx
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-18h]

  v5 = 332;
  if ( a3 < 0x14C )
  {
    if ( a3 >= 4 )
      *a4 = 332;
    v13 = -1073741789;
    v5 = a3 < 4 ? 332 : 4;
  }
  else
  {
    memset(a4, 0, 0x14CuLL);
    v9 = 8LL;
    v10 = (int *)&unk_1402BAF7C;
    a4[4] = 8;
    v11 = a4 + 11;
    do
    {
      *(_OWORD *)(v11 - 5) = *(_OWORD *)*(_QWORD *)(v10 - 3);
      v12 = *v10;
      v10 += 4;
      *(v11 - 1) = v12;
      *v11 = *(v10 - 5);
      v11[1] = 280;
      v11 += 8;
      --v9;
    }
    while ( v9 );
    *a4 = 332;
    *((_WORD *)a4 + 140) = 50;
    v15 = a1;
    v13 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)a4 + 141, a3 - 282, L"%s%d", L"PPM_Processor_", v15);
    if ( v13 >= 0 )
      v13 = 0;
  }
  result = (unsigned int)v13;
  *a5 = v5;
  return result;
}
