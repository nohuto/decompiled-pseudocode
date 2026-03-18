/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C003E990 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgRemoveObject @ 0x1C003F330 (HmgRemoveObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0080864 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCA60 (EngDeleteDriverObj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

struct OBJECT *__fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, int a2, int a3, char a4, char a5, unsigned int *a6)
{
  __int16 v8; // r12
  unsigned int v9; // ebp
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  struct OBJECT *EntryObject; // rbx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  _DWORD *v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]

  v8 = a2;
  v9 = (unsigned int)a1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  v16 = 0LL;
  v17 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v16, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, (a4 & 2) == 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v16) )
  {
    v11 = v16;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v16 & 0xFFFFFF);
    if ( (a4 & 2) == 0
      || (v13 = v11[2] & 0xFFFFFFFE, v13 == -2147483630)
      || v13 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      || !v13 )
    {
      if ( *((_BYTE *)v11 + 14) == a5 && *((_WORD *)v11 + 6) == HIWORD(v9) )
      {
        v14 = *((_DWORD *)EntryObject + 2);
        if ( *((_WORD *)EntryObject + 6) == v8 && v14 == a3 )
        {
          if ( (a4 & 1) != 0 || (*((_BYTE *)v11 + 15) & 1) == 0 )
          {
            HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v16);
            goto LABEL_17;
          }
        }
        else if ( a6 )
        {
          *a6 = v14;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  }
  EntryObject = 0LL;
LABEL_17:
  if ( v17 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  GreReleaseHmgrSemaphore(v10);
  return EntryObject;
}
