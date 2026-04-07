/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800186C0
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001876C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180017490 (-MemoryFree@@YAXPEAX@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rsi
  rsize_t v7; // r14
  char *v8; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_8:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v3, *(const void *const *)this, v7);
    v8 = (char *)*((_QWORD *)this + 3);
    if ( v6 != v8 )
    {
      if ( v8 )
        MemoryFree(v8);
      *((_QWORD *)this + 3) = v6;
    }
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = &v6[v7];
    *((_QWORD *)this + 2) = &v6[v3];
    goto LABEL_8;
  }
  return (char)v5;
}
