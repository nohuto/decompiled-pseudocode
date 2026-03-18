/*
 * XREFs of ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x18002A920
 * Callers:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x18002AA3C (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18002AA88 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800CA100 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::Resize(__int64 a1, int a2)
{
  _OWORD *v2; // r15
  _OWORD *v3; // rbp
  int v6; // edi
  void *v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // r14

  v2 = *(_OWORD **)a1;
  v3 = (_OWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 == a1 + 16 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 8) = a2;
      return 0LL;
    }
  }
  else if ( a2 <= 8 )
  {
    memcpy_0((void *)(a1 + 16), *(const void **)a1, 8LL * a2);
    if ( *(_QWORD *)a1 )
      WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v3;
    goto LABEL_8;
  }
  v6 = *(_DWORD *)(a1 + 12);
  while ( a2 != v6 )
  {
    if ( a2 < v6 / 2 )
    {
      v6 /= 2;
    }
    else
    {
      if ( a2 <= v6 )
        break;
      v6 *= 2;
    }
  }
  if ( v6 == *(_DWORD *)(a1 + 12) )
    goto LABEL_8;
  v8 = *(void **)a1;
  if ( v2 == v3 )
    v8 = 0LL;
  v9 = Components::Animations::Heap::Realloc(
         (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
         v8,
         8LL * v6);
  v10 = v9;
  if ( v9 )
  {
    if ( v2 == v3 )
    {
      *v9 = *v3;
      v9[1] = v3[1];
      v9[2] = v3[2];
      v9[3] = v3[3];
    }
    if ( v6 > *(_DWORD *)(a1 + 12) )
      memset_0((char *)v9 + 8 * *(int *)(a1 + 12), 0, 8LL * (v6 - *(_DWORD *)(a1 + 12)));
    *(_DWORD *)(a1 + 12) = v6;
    *(_QWORD *)a1 = v10;
    goto LABEL_8;
  }
  return 2147942414LL;
}
