/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0022FB0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0023090 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0023200 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0023250 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0039218 (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
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
  int v17; // r15d
  LONG v18; // edi
  LONG v19; // r12d
  _DWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  LONG v23; // edi
  LONG v24; // r15d
  LONG v25; // r12d
  _BYTE v26[8]; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v27; // [rsp+28h] [rbp-D8h] BYREF
  int v28; // [rsp+30h] [rbp-D0h]
  REGION *v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h]
  struct _RECTL v31; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  _BYTE v34[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  _QWORD v36[4]; // [rsp+C8h] [rbp-38h] BYREF
  int v37; // [rsp+E8h] [rbp-18h]
  struct _POINTL v38; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v39; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v42; // [rsp+108h] [rbp+8h]
  LONG v43; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v39.x = a3->right;
  x = v39.x;
  bottom = a3->bottom;
  v43 = bottom;
  v38.x = left;
  v38.y = top;
  v39.y = top;
  v42 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v34);
  if ( !v35 )
  {
    EngSetLastError(8u);
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v34, a2, &v38)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v34, a2, &v39, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v34) )
  {
    goto LABEL_3;
  }
  v30 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v29, (struct EPATHOBJ *)v34, 1u, 0LL);
  v11 = v29;
  if ( !v29 )
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
    v28 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v27, 0xD8u);
    v14 = v27;
    if ( v27 )
    {
      *(_QWORD *)&v31.left = v12;
      v9 = RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v29, a4);
      if ( v9 )
      {
        v14 = v27;
        v15 = *(REGION **)&v31.left;
        ++*((_DWORD *)v27 + 8);
        *((_QWORD *)this + 28) = v14;
        v16 = (*((_DWORD *)v15 + 8))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(v27);
        v14 = 0LL;
      }
      v11 = v29;
    }
    REGION::vDeleteREGION(v11);
    v16 = v28 == 1;
LABEL_37:
    v11 = 0LL;
    if ( v16 )
      REGION::vDeleteREGION(v14);
    goto LABEL_39;
  }
  if ( a4 != 1 )
  {
    v33 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v32, 0xD8u);
    v14 = v32;
    if ( v32 )
    {
      v28 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v27, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
      if ( v27 )
      {
        DC::vGet_sizlWindow(this, (struct tagSIZE *)&v31);
        v17 = 0;
        v18 = v31.left;
        v19 = v31.top;
        v20 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v26);
          if ( (v20[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
          {
            v9 = v20[650];
            v18 += v9;
            v17 = v20[651];
            v19 += v17;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v21);
          }
        }
        v22 = (*((_BYTE *)this + 40) & 1) != 0 ? 8 : 0;
        v23 = v18 - *(_DWORD *)((char *)this + v22 + 1432);
        v24 = v17 - *(_DWORD *)((char *)this + v22 + 1436);
        v25 = v19 - *(_DWORD *)((char *)this + v22 + 1436);
        v31.left = v9 - *(_DWORD *)((char *)this + v22 + 1432);
        v31.right = v23;
        v31.top = v24;
        v31.bottom = v25;
        RGNOBJ::vSet((RGNOBJ *)&v27, &v31);
        v9 = RGNOBJ::iCombine((RGNOBJ *)&v32, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v29, a4);
        if ( v9 )
        {
          v14 = v32;
          ++*((_DWORD *)v32 + 8);
          *((_QWORD *)this + 28) = v14;
        }
        else
        {
          REGION::vDeleteREGION(v32);
          v14 = 0LL;
        }
        v11 = v29;
      }
      else
      {
        REGION::vDeleteREGION(v14);
        v14 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v27);
    }
    REGION::vDeleteREGION(v11);
    v16 = v33 == 1;
    goto LABEL_37;
  }
  ++*((_DWORD *)v11 + 8);
  *((_QWORD *)this + 28) = v11;
  v9 = RGNOBJ::iComplexity((RGNOBJ *)&v29);
LABEL_39:
  if ( v30 == 1 )
    REGION::vDeleteREGION(v11);
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v34);
  if ( v37 )
    PopThreadGuardedObject(v36);
  return v9;
}
