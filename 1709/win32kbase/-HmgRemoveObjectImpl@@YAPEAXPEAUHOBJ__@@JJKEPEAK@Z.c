/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0040094 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     HmgPentryFromPobj @ 0x1C004D460 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004DBC0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C004DDA8 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E060 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

struct OBJECT *__fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, int a2, int a3, char a4, char a5, unsigned int *a6)
{
  __int16 v8; // r13
  unsigned int v9; // r14d
  struct OBJECT *v10; // rdi
  _DWORD *v11; // rbx
  struct OBJECT *EntryObject; // rsi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rax
  _DWORD *v20; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+38h] [rbp-40h]

  v8 = a2;
  v9 = (unsigned int)a1;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  v10 = 0LL;
  v20 = 0LL;
  v21 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, (a4 & 2) == 0, 0, 0);
  if ( v21 )
  {
    v11 = v20;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v20 & 0xFFFFFF);
    if ( (a4 & 2) == 0
      || (v13 = v11[2] & 0xFFFFFFFE, v13 == -2147483630)
      || v13 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      || !v13 )
    {
      if ( *((_BYTE *)v11 + 14) == a5 && *((_WORD *)v11 + 6) == HIWORD(v9) )
      {
        v18 = *((_DWORD *)EntryObject + 2);
        if ( *((_WORD *)EntryObject + 6) == v8 && v18 == a3 )
        {
          if ( (a4 & 1) != 0 || (*((_BYTE *)v11 + 15) & 1) == 0 )
          {
            v19 = HmgPentryFromPobj(EntryObject);
            TrackHmgrReferenceDecrement(*(_BYTE *)(v19 + 14), EntryObject);
            HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v20);
            goto LABEL_8;
          }
        }
        else
        {
          *((_BYTE *)v11 + 15) |= 8u;
          if ( a6 )
            *a6 = v18;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
      goto LABEL_9;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
  }
  EntryObject = 0LL;
LABEL_8:
  v10 = EntryObject;
LABEL_9:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
  GreReleaseHmgrSemaphore(v15, v14, v16);
  return v10;
}
