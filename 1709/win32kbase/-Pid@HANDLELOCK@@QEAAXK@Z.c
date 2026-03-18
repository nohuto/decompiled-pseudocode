/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C004DCF0
 * Callers:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0053FCC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r10
  struct HOBJ__ **v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // rax

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (a2 ^ *(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v5 = 0LL;
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 2056);
  if ( v3 < v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v3 >= v7 )
      v8 = ((v3 - v7) >> 16) + 1;
    else
      v8 = 0;
    v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
    if ( v8 )
      v6 += ((1 - v8) << 16) - v7;
    if ( v6 < *(_DWORD *)(v9 + 20) )
      v5 = *(struct HOBJ__ ***)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                              + 16LL * (unsigned __int8)v6
                              + 8);
  }
  RECHMGRCREATE(*v5, (struct _BASEOBJECT *)v5);
}
