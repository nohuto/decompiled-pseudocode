/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BBCE8
 * Callers:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBD9C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
    v4 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = *(_QWORD *)this & 1LL;
  if ( a2 < v4 )
  {
    if ( v4 == 1 )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      v6 = v4 - 1;
      v7 = v5 + 2;
      if ( v6 == 1 )
      {
        v8 = v7[-a2 + 1];
        WPF::ProcessHeapImpl::Free(v5);
        *(_QWORD *)this = v8 | 1;
      }
      else
      {
        if ( a2 < v6 )
          memmove(&v7[a2], &v7[a2 + 1], 8 * (v6 - a2));
        *v5 = v6;
      }
    }
  }
}
