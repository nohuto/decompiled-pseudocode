/*
 * XREFs of sub_140176C50 @ 0x140176C50
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401690CC (KiMarkBugCheckRegions.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     MmIsAddressValid @ 0x140219970 (MmIsAddressValid.c)
 *     ExQueryBigPoolTag @ 0x1402847CC (ExQueryBigPoolTag.c)
 */

void __fastcall sub_140176C50(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  BOOL v11; // r8d
  int v12; // ebx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 7 && a3 == -1073741694 )
  {
    v4 = KeKvaShadowingActive();
    v5 = (unsigned __int64)KiSystemCall64Shadow;
    if ( !v4 )
      v5 = (unsigned __int64)KiSystemCall64;
    v6 = (v5 ^ KiMismatchSummary) & 0xFFFFFFFFFFFFF000uLL;
    IoAddTriageDumpDataBlock((v5 ^ KiMismatchSummary) & 0xFFFFF000, 4096);
    if ( MmIsAddressValid((PVOID)v6) )
    {
      LODWORD(v7) = 4;
      v8 = v14;
      v9 = 4LL;
      v10 = MmPteBase + ((v6 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *v8++ = v10;
        v10 = MmPteBase + ((v10 >> 9) & 0x7FFFFFFFF8LL);
        --v9;
      }
      while ( v9 );
      v11 = 0;
      do
      {
        if ( v11 )
        {
          v7 = (unsigned int)(v7 - 1);
          v14[v7] = 0LL;
        }
        else
        {
          LODWORD(v7) = v7 - 1;
          if ( !(_DWORD)v7 )
            break;
          v11 = *(char *)v14[(unsigned int)v7] < 0;
        }
      }
      while ( (_DWORD)v7 );
      v12 = 4;
      do
      {
        v13 = v14[v12 - 1];
        if ( !v13 )
          break;
        IoAddTriageDumpDataBlock(v13, 8);
        --v12;
      }
      while ( v12 );
    }
    if ( (unsigned int)ExQueryBigPoolTag(v6, &KiSuspectPoolTag) )
      IoAddTriageDumpDataBlock((int)&KiSuspectPoolTag, 4);
  }
}
