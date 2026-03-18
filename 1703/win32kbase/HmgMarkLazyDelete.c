/*
 * XREFs of HmgMarkLazyDelete @ 0x1C007C340
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0031144 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgMarkLazyDelete(struct HOBJ__ *a1, char a2, _DWORD *a3)
{
  _DWORD *v4; // rdi
  unsigned int v5; // ebx
  _DWORD *v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v7, a1, a2);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v7) )
  {
    *a3 = 0;
    v4 = v7;
    GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v7 & 0xFFFFFF);
    v5 = 1;
    if ( (unsigned int)HANDLELOCK::ShareCount((HANDLELOCK *)&v7) )
    {
      *((_BYTE *)v4 + 15) |= 2u;
      *a3 = 1;
    }
    *((_QWORD *)v4 + 2) = 0LL;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  else
  {
    v5 = 0;
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  return v5;
}
