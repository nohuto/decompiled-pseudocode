/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x14049E028
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 */

void __fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 768) & 0x20000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 1296);
    v4 = *(_QWORD *)(v3 + 40);
    if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
    {
LABEL_6:
      *(_QWORD *)(v3 + 40) = v4 - ((unsigned __int8)ExGenRandom(1) << 16);
      return;
    }
    if ( !a2 )
    {
      v4 = ((unsigned int)ExGenRandom(1) << 16) + 0x7FF600000000LL;
      goto LABEL_6;
    }
    if ( !a3 )
    {
      v4 = 0x7FF600000000LL;
      goto LABEL_6;
    }
    v4 = *(_QWORD *)(a1 + 960);
    if ( (unsigned __int64)(v4 - 0x7FF600000001LL) <= 0x1FFFFFFFELL )
      goto LABEL_6;
  }
}
