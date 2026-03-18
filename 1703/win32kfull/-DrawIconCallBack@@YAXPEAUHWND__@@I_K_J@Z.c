/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01CA990
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rsi
  int v11; // ebp
  unsigned __int64 *v12; // rbx
  __int64 i; // rax
  struct tagCURSOR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  _QWORD v18[4]; // [rsp+50h] [rbp-38h] BYREF

  v6 = HMValidateHandleNoSecure(a3, 1);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 71) & 0x10) != 0 )
    {
      v8 = HMValidateHandleNoSecure(a1, 1);
      if ( v8 )
      {
        v9 = Getpswi((struct tagWND *)v7);
        v10 = v9;
        if ( v9 )
        {
          v11 = 0;
          v12 = (unsigned __int64 *)(*((_QWORD *)v9 + 2) + 32LL);
LABEL_11:
          if ( *v12 != 1 )
          {
            for ( i = HMValidateHandleNoSecure(*v12, 1); ; i = *(_QWORD *)(i + 120) )
            {
              if ( !i )
              {
                ++v12;
                ++v11;
                goto LABEL_11;
              }
              if ( v8 == i )
                break;
            }
            if ( !a4 || (v14 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, 3)) == 0LL )
              v14 = (struct tagCURSOR *)qword_1C0325938;
            v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v18;
            ++*(_DWORD *)(v7 + 8);
            v18[1] = v7;
            xxxPaintIconsInSwitchWindow((struct tagWND *)v7, v10, 0LL, v11, v17, 1, 0, 0, v14);
            ThreadUnlock1(v16, v15);
          }
        }
      }
    }
  }
}
