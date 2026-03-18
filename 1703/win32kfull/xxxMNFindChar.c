/*
 * XREFs of xxxMNFindChar @ 0x1C0219414
 * Callers:
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 * Callees:
 *     xxxClientFindMnemChar @ 0x1C02006E0 (xxxClientFindMnemChar.c)
 *     MNFindNextValidItem @ 0x1C021936C (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMNFindChar(__int64 a1, int a2, int a3, unsigned int *a4)
{
  int v4; // ebp
  int v5; // ebx
  __int16 v6; // r12
  unsigned int MnemChar; // esi
  unsigned int v10; // edi
  int ValidItem; // r15d
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 0LL;
  MnemChar = 0;
  v10 = -1;
  ValidItem = a3;
  if ( a3 < 0 )
    ValidItem = MNFindNextValidItem(a1, *(_DWORD *)(a1 + 68), -1, 1);
  do
  {
    v12 = v5;
    v13 = MNFindNextValidItem(a1, v5, 1, 1);
    v5 = v13;
    if ( v13 == -1 || v13 == v4 )
      break;
    if ( v4 == -1 )
      v4 = v13;
    v14 = *(_QWORD *)(a1 + 96) + 152LL * v13;
    v15 = *(const WCHAR **)(v14 + 40);
    if ( v15 && *(_DWORD *)(v14 + 48) )
    {
      if ( *v15 == 8 )
        ++v15;
      RtlInitUnicodeString(&DestinationString, v15);
      MnemChar = (unsigned int)xxxClientFindMnemChar((char **)&DestinationString, v6);
      if ( MnemChar == 128 && v10 == -1 )
        v10 = v5;
    }
  }
  while ( v5 != v12 && MnemChar != 1 && ValidItem != v5 );
  if ( MnemChar == 1 )
    v10 = v5;
  *a4 = MnemChar;
  return v10;
}
