/*
 * XREFs of ?CompareTo@CBrushRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x18006C9F0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CompareTo(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 v8; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  _BYTE *v12; // rcx
  char *v13; // rsi
  _BYTE *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r11
  bool v18; // al

  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 48LL))(a3) != 1 || (a2 == 22) != (a4 == 22) )
    return 0LL;
  if ( a3 != (_QWORD *)a1 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 != a3[2] )
      return 0LL;
    v10 = *(_DWORD *)(v8 + 92);
    v11 = 0;
    if ( v10 )
    {
      v12 = (char *)a3 + 121;
      v13 = (char *)a3 - a1;
      v14 = (_BYTE *)(a1 + 40);
      v15 = 0LL;
      v16 = a1 - (_QWORD)a3;
      while ( *((_QWORD *)v14 - 2) == *(_QWORD *)&v13[(_QWORD)v14 - 16] && *v14 == v14[(_QWORD)v13] )
      {
        v18 = v12[v16 - 1] != *(v12 - 1) || v12[v16] != *v12 || v12[v16 + 1] != v12[1];
        if ( v18 || *(_BYTE *)(a1 + v15 + 132) != *((_BYTE *)a3 + v15 + 132) )
          break;
        ++v11;
        ++v15;
        v12 += 3;
        v14 += 24;
        if ( v11 >= v10 )
          return 1LL;
      }
      return 0LL;
    }
  }
  return 1LL;
}
