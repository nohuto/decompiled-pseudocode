/*
 * XREFs of PiDmListInit @ 0x140630F6C
 * Callers:
 *     PiDmInit @ 0x1408B1FB0 (PiDmInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  P = 0LL;
  v5 = a1;
  v1 = PiDmEnumObjectsWithCallback(
         *((_DWORD *)&unk_1402F2710 + 10 * a1),
         (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDmListInitEnumCallback,
         (__int64)&P);
  if ( P )
    ExFreePoolWithTag(P, 0x5A706E50u);
  return v1;
}
