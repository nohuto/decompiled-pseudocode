/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640
 * Callers:
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 * Callees:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C001CA70 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C001CBE0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C001CC30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001D210 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0051EF0 (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  unsigned int v9; // r14d
  REGION *v11; // rbx
  __int64 v12; // r15
  struct _ENTRY *EntryFromObject; // rax
  REGION *v14; // rdi
  REGION *v15; // rcx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r15d
  LONG v23; // edi
  LONG v24; // r12d
  _DWORD *v25; // rbx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  LONG v30; // edi
  int v31; // eax
  _BYTE v32[8]; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v33; // [rsp+28h] [rbp-D8h] BYREF
  int v34; // [rsp+30h] [rbp-D0h]
  REGION *v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h]
  struct _RECTL v37; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+60h] [rbp-A0h]
  _BYTE v40[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[4]; // [rsp+C8h] [rbp-38h] BYREF
  int v43; // [rsp+E8h] [rbp-18h]
  struct _POINTL v44; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v45; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v48; // [rsp+108h] [rbp+8h]
  LONG v49; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v45.x = a3->right;
  x = v45.x;
  bottom = a3->bottom;
  v49 = bottom;
  v44.x = left;
  v44.y = top;
  v45.y = top;
  v48 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v40);
  if ( !v41 )
  {
    EngSetLastError(8u);
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v40, a2, &v44)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v40, a2, &v45, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v40) )
  {
    goto LABEL_3;
  }
  v36 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v35, (struct EPATHOBJ *)v40, 1u, 0LL);
  v11 = v35;
  if ( !v35 )
  {
    EngSetLastError(8u);
    v9 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v9 = 0;
  v12 = *((_QWORD *)this + 28);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v12 )
  {
    v34 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0xD8u);
    v14 = v33;
    if ( v33 )
    {
      *(_QWORD *)&v37.left = v12;
      v9 = RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v35, a4);
      if ( v9 )
      {
        v14 = v33;
        v15 = *(REGION **)&v37.left;
        ++*((_DWORD *)v33 + 8);
        *((_QWORD *)this + 28) = v14;
        v16 = (*((_DWORD *)v15 + 8))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(v33);
        v14 = 0LL;
      }
      v11 = v35;
    }
    REGION::vDeleteREGION(v11);
    v16 = v34 == 1;
LABEL_37:
    v11 = 0LL;
    if ( v16 )
      REGION::vDeleteREGION(v14);
    goto LABEL_39;
  }
  if ( a4 != 1 )
  {
    v39 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v38, 0xD8u);
    v14 = v38;
    if ( v38 )
    {
      v34 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33, v17, v18, v19);
      if ( v33 )
      {
        DC::vGet_sizlWindow(this, (struct tagSIZE *)&v37);
        v22 = 0;
        v23 = v37.left;
        v24 = v37.top;
        v25 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v32);
          if ( (v25[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
          {
            v9 = v25[650];
            v23 += v9;
            v22 = v25[651];
            v24 += v22;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v26);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v27);
          }
        }
        v28 = *((_DWORD *)this + 10) & 1;
        v29 = *((_DWORD *)this + 2 * v28 + 358);
        v30 = v23 - v29;
        v37.left = v9 - v29;
        v31 = *((_DWORD *)this + 2 * v28 + 359);
        v37.top = v22 - v31;
        v37.bottom = v24 - v31;
        v37.right = v30;
        RGNOBJ::vSet((RGNOBJ *)&v33, &v37);
        v9 = RGNOBJ::iCombine((RGNOBJ *)&v38, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v35, a4);
        if ( v9 )
        {
          v14 = v38;
          ++*((_DWORD *)v38 + 8);
          *((_QWORD *)this + 28) = v14;
        }
        else
        {
          REGION::vDeleteREGION(v38);
          v14 = 0LL;
        }
        v11 = v35;
      }
      else
      {
        REGION::vDeleteREGION(v14);
        v14 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v33, v20, v21);
    }
    REGION::vDeleteREGION(v11);
    v16 = v39 == 1;
    goto LABEL_37;
  }
  ++*((_DWORD *)v11 + 8);
  *((_QWORD *)this + 28) = v11;
  v9 = RGNOBJ::iComplexity((RGNOBJ *)&v35);
LABEL_39:
  if ( v36 == 1 )
    REGION::vDeleteREGION(v11);
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v40);
  if ( v43 )
    PopThreadGuardedObject(v42);
  return v9;
}
