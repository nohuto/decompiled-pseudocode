/*
 * XREFs of GreDeleteWnd @ 0x1C02683A0
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0100328 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C0256240 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C02682D0 (EngDeleteWnd.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02656E0 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bDelete@EWNDOBJ@@QEAAHXZ @ 0x1C026778C (-bDelete@EWNDOBJ@@QEAAHXZ.c)
 *     ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C02677DC (-bValid@EWNDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  EWNDOBJ *v5; // rcx
  EWNDOBJ *v6; // rax
  TRACKOBJ *v7; // rcx
  __int64 v8; // rax
  EWNDOBJ *v9; // rcx
  _BYTE v10[88]; // [rsp+20h] [rbp-58h] BYREF
  HDEV v11; // [rsp+80h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF

  result = EWNDOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(v3 + 168);
    v11 = *(HDEV *)(*(_QWORD *)(v4 + 32) + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct PDEVOBJ *)&v11);
    v13 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v12 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v12);
    (*(void (__fastcall **)(EWNDOBJ *, __int64))(v4 + 40))(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v12);
    v5 = *(EWNDOBJ **)(v4 + 24);
    if ( v5 == this )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    }
    else if ( v5 )
    {
      while ( 1 )
      {
        v6 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( v6 == this )
          break;
        v5 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( !v6 )
          goto LABEL_9;
      }
      *((_QWORD *)v5 + 20) = *((_QWORD *)this + 20);
    }
LABEL_9:
    EWNDOBJ::bDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v7 = gpto;
      if ( (TRACKOBJ *)v4 == gpto )
      {
        gpto = *(TRACKOBJ **)(v4 + 8);
      }
      else if ( gpto )
      {
        while ( 1 )
        {
          v8 = *((_QWORD *)v7 + 1);
          if ( v8 == v4 )
            break;
          v7 = (TRACKOBJ *)*((_QWORD *)v7 + 1);
          if ( !v8 )
            goto LABEL_17;
        }
        *((_QWORD *)v7 + 1) = *(_QWORD *)(v4 + 8);
      }
LABEL_17:
      v9 = *(EWNDOBJ **)(v4 + 16);
      if ( v9 )
      {
        EWNDOBJ::bDelete(v9);
        *(_DWORD *)(*(_QWORD *)(v4 + 16) + 152LL) = 0;
        Win32FreePool(*(_QWORD *)(v4 + 16));
      }
      *(_DWORD *)v4 = 0;
      Win32FreePool(v4);
    }
    vSpWndobjChange(v11, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
    return PDEVOBJ::vUnreferencePdev(&v11, 0LL);
  }
  return result;
}
