/*
 * XREFs of HmgLockAllOwners @ 0x1C007B9E0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockAllOwners(unsigned int a1, char a2)
{
  __int16 v3; // edi^2
  __int64 v4; // rbx
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  signed int v11; // ecx
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]

  v14 = 0LL;
  v3 = HIWORD(a1);
  v15 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v14, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v14) )
  {
    if ( *(_BYTE *)(v14 + 14) != a2 || *(_WORD *)(v14 + 12) != v3 )
    {
LABEL_4:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
      goto LABEL_5;
    }
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v14 & 0xFFFFFF);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_16;
    if ( v7 >= v10 )
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( (v7 - v10) >> 16 == -2 )
        goto LABEL_16;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
    if ( v11 )
      v9 = (_DWORD)v9 - (v11 << 16) - v10 + 0x10000;
    if ( (unsigned int)v9 < *(_DWORD *)(v12 + 20) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
LABEL_17:
      v13 = *(_WORD *)(v4 + 12);
      if ( !v13 || *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
      {
        *(_WORD *)(v4 + 12) = v13 + 1;
        *(_QWORD *)(v4 + 16) = KeGetCurrentThread();
      }
      else
      {
        v4 = 0LL;
      }
      goto LABEL_4;
    }
LABEL_16:
    v4 = 0LL;
    goto LABEL_17;
  }
LABEL_5:
  if ( v15 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
  return v4;
}
