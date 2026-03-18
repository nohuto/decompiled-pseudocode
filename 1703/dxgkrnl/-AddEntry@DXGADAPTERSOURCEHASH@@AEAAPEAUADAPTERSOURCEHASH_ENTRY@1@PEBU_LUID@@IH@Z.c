/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0118290
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0195960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00A648C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C0195864 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        int a4)
{
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  char *v11; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  int v13; // eax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax

  if ( !*(_QWORD *)((char *)this + 52) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((PVOID *)this + 5, 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 14) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40)) >> 4;
  v10 = 1 << *((_DWORD *)this + 15);
  if ( v9 > v10 )
    v9 = 1 << *((_DWORD *)this + 15);
  if ( v9 != v10 )
  {
    if ( *((_DWORD *)this + 14) == v9 )
    {
      if ( v9 + 8 < v10 )
        v10 = v9 + 8;
      v11 = (char *)AUTOEXPANDALLOCATION::GetBuffer((PVOID *)this + 5, 16 * v10, 1);
      memset(&v11[16 * v9 + 16], 0, 16LL * (v10 - v9 - 1));
    }
    else
    {
      v11 = (char *)*((_QWORD *)this + 5);
    }
    Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v11[16 * *((unsigned int *)this + 14)];
    goto LABEL_10;
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, *((_DWORD *)this + 14) % v9, 0, 0LL, 0LL);
  if ( Entry )
  {
LABEL_10:
    *((_DWORD *)Entry + 3) |= 1u;
    *(struct _LUID *)Entry = *a2;
    v13 = (*((_DWORD *)Entry + 3) ^ (2 * a4)) & 2;
    *((_DWORD *)Entry + 2) = a3;
    *((_DWORD *)Entry + 3) ^= v13;
    result = Entry;
    ++*((_DWORD *)this + 14);
    return result;
  }
  return 0LL;
}
