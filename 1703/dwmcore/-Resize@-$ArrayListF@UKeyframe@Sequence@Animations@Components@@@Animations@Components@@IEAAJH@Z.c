/*
 * XREFs of ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800C1110
 * Callers:
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800C1200 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800CA100 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::Resize(
        __int64 a1,
        int a2)
{
  _OWORD *v2; // r14
  _OWORD *v3; // rsi
  int v7; // ebx
  void *v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // r15
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rsi

  v2 = *(_OWORD **)a1;
  v3 = (_OWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 == a1 + 16 )
  {
    if ( a2 <= 8 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 8) = a2;
      return 0LL;
    }
  }
  else if ( a2 <= 8 )
  {
    memcpy_0((void *)(a1 + 16), *(const void **)a1, 24LL * a2);
    if ( *(_QWORD *)a1 )
      WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v3;
    goto LABEL_3;
  }
  v7 = *(_DWORD *)(a1 + 12);
  while ( a2 != v7 )
  {
    if ( a2 >= v7 / 2 )
    {
      if ( a2 <= v7 )
        break;
      v7 *= 2;
    }
    else
    {
      v7 /= 2;
    }
  }
  if ( v7 == *(_DWORD *)(a1 + 12) )
    goto LABEL_3;
  v8 = *(void **)a1;
  if ( v2 == v3 )
    v8 = 0LL;
  v9 = Components::Animations::Heap::Realloc(
         (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
         v8,
         24LL * v7);
  v10 = v9;
  if ( v9 )
  {
    if ( v2 == v3 )
    {
      *v9 = *v3;
      v9[1] = v3[1];
      v9[2] = v3[2];
      v9[3] = v3[3];
      v9[4] = v3[4];
      v9[5] = v3[5];
      v9[6] = v3[6];
      v11 = v9 + 8;
      v12 = v3[7];
      v13 = v3 + 8;
      *(v11 - 1) = v12;
      *v11 = *v13;
      v11[1] = v13[1];
      v11[2] = v13[2];
      v11[3] = v13[3];
    }
    if ( v7 > *(_DWORD *)(a1 + 12) )
      memset_0((char *)v10 + 24 * *(int *)(a1 + 12), 0, 24LL * (v7 - *(_DWORD *)(a1 + 12)));
    *(_DWORD *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v10;
    goto LABEL_3;
  }
  return 2147942414LL;
}
