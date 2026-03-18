/*
 * XREFs of GreIntersectVisRect @ 0x1C00FCCC0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00A59E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0046DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // edi
  struct OBJECT *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  struct OBJECT *v19; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v24; // [rsp+28h] [rbp-71h] BYREF
  __int16 *v25; // [rsp+30h] [rbp-69h] BYREF
  int v26; // [rsp+38h] [rbp-61h]
  __int16 *v27; // [rsp+40h] [rbp-59h] BYREF
  int v28; // [rsp+48h] [rbp-51h]
  struct _RECTL v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+60h] [rbp-39h] BYREF
  struct OBJECT *v31[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v32[80]; // [rsp+78h] [rbp-21h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v31, a1);
  v9 = v31[0];
  if ( v31[0] )
  {
    v30 = *((_QWORD *)v31[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v32, (struct PDEVOBJ *)&v30);
    if ( (v32[24] & 1) != 0 )
    {
      v24 = *((_QWORD *)v9 + 192);
      v29.left = a2;
      v29.top = a3;
      v29.right = a4;
      v29.bottom = a5;
      v28 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v27, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27, v10, v11, v12);
      v13 = *(_DWORD *)(v24 + 80);
      v26 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v25, v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v25, v14, v15, v16);
      if ( v27 && v25 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v27, &v29);
        RGNOBJ::vCopy((RGNOBJ *)&v25, (struct RGNOBJ *)&v24);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v24, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v25, 1) )
        {
          *((_QWORD *)v9 + 192) = v24;
          v19 = v31[0];
          *(_DWORD *)(v24 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          *((_DWORD *)v19 + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v19);
          v5 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v25, v17, v18);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v27, v21, v22);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v31);
  }
  return v5;
}
