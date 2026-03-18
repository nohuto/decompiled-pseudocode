/*
 * XREFs of ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0142E60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0140898 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  size_t v5; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 20) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 * *((_QWORD *)this + 21) + *((_QWORD *)this + 17));
      if ( v4 )
      {
        Win32FreePool(v4);
        v5 = *((_QWORD *)this + 21);
        Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 17) + v3 * v5), &Src, v5);
      }
      ++v3;
    }
    while ( v3 < *((_QWORD *)this + 20) );
    *((_DWORD *)this + 44) = 0;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 136),
      0LL,
      0x6D6C4344u);
  }
}
