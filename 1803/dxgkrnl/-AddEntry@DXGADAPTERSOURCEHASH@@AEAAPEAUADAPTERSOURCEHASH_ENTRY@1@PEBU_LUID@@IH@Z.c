/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C019CD64
 * Callers:
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C019CF48 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C019E960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C019E75C (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01A8AB4 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        char a4)
{
  _DWORD *Buffer; // rax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax
  unsigned int v10; // esi
  unsigned int v11; // ebp
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  __int64 v13; // rax
  char *v14; // rbx
  int v15; // ecx

  if ( !*(_QWORD *)((char *)this + 52) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 14) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v10 = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40)) >> 4;
  v11 = 1 << *((_DWORD *)this + 15);
  if ( v10 <= v11 )
  {
    if ( v10 != v11 )
    {
      v13 = *((unsigned int *)this + 14);
      if ( (_DWORD)v13 == v10 )
      {
        if ( v10 + 8 < v11 )
          v11 = v10 + 8;
        v14 = (char *)AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 16 * v11, 1);
        memset(&v14[16 * v10 + 16], 0, 16LL * (v11 - v10 - 1));
        v13 = *((unsigned int *)this + 14);
      }
      else
      {
        v14 = (char *)*((_QWORD *)this + 5);
      }
      Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v14[16 * v13];
      goto LABEL_16;
    }
  }
  else
  {
    v10 = 1 << *((_DWORD *)this + 15);
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, *((_DWORD *)this + 14) % v10, 0, 0LL, 0LL);
  if ( !Entry )
    return 0LL;
LABEL_16:
  *((_DWORD *)Entry + 3) |= 1u;
  v15 = *((_DWORD *)Entry + 3);
  *(struct _LUID *)Entry = *a2;
  *((_DWORD *)Entry + 2) = a3;
  *((_DWORD *)Entry + 3) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * a4)) & 2;
  result = Entry;
  ++*((_DWORD *)this + 14);
  return result;
}
