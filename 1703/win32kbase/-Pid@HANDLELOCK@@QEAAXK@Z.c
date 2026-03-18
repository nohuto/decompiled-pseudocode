/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned int v6; // r9d
  struct HOBJ__ **v7; // r8
  signed int v8; // ecx
  __int64 v9; // rax
  unsigned __int8 v10; // cl

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    goto LABEL_9;
  v7 = 0LL;
  if ( v3 >= v6 )
  {
    v8 = ((v3 - v6) >> 16) + 1;
    if ( (v3 - v6) >> 16 != -2 )
      goto LABEL_4;
LABEL_9:
    v7 = 0LL;
    goto LABEL_8;
  }
  v8 = 0;
LABEL_4:
  v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
  if ( v8 )
    v5 = (_DWORD)v5 - (v8 << 16) - v6 + 0x10000;
  if ( (unsigned int)v5 < *(_DWORD *)(v9 + 20) )
  {
    v10 = v5;
    v5 >>= 8;
    v7 = *(struct HOBJ__ ***)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * v5) + 16LL * v10 + 8);
  }
LABEL_8:
  RECHMGRCREATE(*v7, (struct _BASEOBJECT *)v5);
}
