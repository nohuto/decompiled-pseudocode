/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0039218 (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C0040DEC (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0040EB8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  REGION *v4; // r12
  int v8; // r13d
  __int64 Object; // rax
  REGION *v10; // rsi
  _QWORD *v11; // rax
  struct _ENTRY *EntryFromObject; // rax
  unsigned int v13; // ebx
  REGION *v14; // rdi
  REGION *v15; // rcx
  REGION *v17; // r14
  int v18; // r12d
  LONG cx; // ebx
  _DWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  LONG v24; // ebx
  REGION *v25; // rcx
  REGION *v26; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+28h] [rbp-40h]
  struct _RECTL v28; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v29; // [rsp+40h] [rbp-28h] BYREF
  int v30; // [rsp+48h] [rbp-20h]
  REGION *v31; // [rsp+50h] [rbp-18h] BYREF
  int v32; // [rsp+58h] [rbp-10h]
  REGION *v33; // [rsp+B0h] [rbp+48h] BYREF
  LONG cy; // [rsp+B8h] [rbp+50h]
  int v35; // [rsp+C0h] [rbp+58h]
  tagSIZE v36; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a3;
  v4 = (REGION *)*((_QWORD *)this + 28);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 0;
  v27 = 0;
  Object = AllocateObject(0xD8uLL);
  v26 = (REGION *)Object;
  v10 = (REGION *)Object;
  if ( !Object )
    return 0;
  *(_DWORD *)(Object + 80) = 120;
  *(_QWORD *)(Object + 84) = 1LL;
  *(_QWORD *)(Object + 92) = 0LL;
  *(_DWORD *)(Object + 100) = 0;
  *(_DWORD *)(Object + 104) = 0;
  *(_DWORD *)(Object + 108) = 0x80000000;
  *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
  *(_QWORD *)(Object + 40) = Object + 120;
  *(_QWORD *)(Object + 24) = 216LL;
  *(_QWORD *)(Object + 32) = 0LL;
  v11 = (_QWORD *)(Object + 48);
  v11[1] = v11;
  *v11 = v11;
  RGNOBJ::vSet((RGNOBJ *)&v26, a2);
  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v4 )
  {
    v28.right = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v28, 0xD8u);
    v14 = *(REGION **)&v28.left;
    if ( *(_QWORD *)&v28.left )
    {
      v33 = v4;
      v13 = RGNOBJ::iCombine((RGNOBJ *)&v28, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v26, a3);
      if ( v13 )
      {
        v14 = *(REGION **)&v28.left;
        v15 = v33;
        ++*(_DWORD *)(*(_QWORD *)&v28.left + 32LL);
        *((_QWORD *)this + 28) = v14;
        if ( (*((_DWORD *)v15 + 8))-- == 1 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)&v28.left);
        v14 = 0LL;
      }
      v10 = v26;
    }
    else
    {
      v13 = 0;
    }
    REGION::vDeleteREGION(v10);
    if ( v28.right != 1 )
      goto LABEL_17;
    v25 = v14;
    goto LABEL_35;
  }
  if ( a3 != 1 )
  {
    v32 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0xD8u);
    v30 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v29, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
    v17 = v31;
    if ( v31 )
    {
      if ( v29 )
      {
        DC::vGet_sizlWindow(this, &v36);
        v18 = 0;
        cx = v36.cx;
        v20 = (_DWORD *)*((_QWORD *)this + 6);
        cy = v36.cy;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
          if ( (v20[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
          {
            v18 = v20[650];
            cx += v18;
            v8 = v20[651];
            cy = v8 + v36.cy;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v21);
          }
        }
        v22 = (*((_BYTE *)this + 40) & 1) != 0 ? 8 : 0;
        v23 = *(_DWORD *)((char *)this + v22 + 1436);
        v24 = cx - *(_DWORD *)((char *)this + v22 + 1432);
        v28.left = v18 - *(_DWORD *)((char *)this + v22 + 1432);
        v28.bottom = cy - v23;
        v28.right = v24;
        v28.top = v8 - v23;
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v28) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v28) )
        {
          v13 = 0;
          REGION::vDeleteREGION(v17);
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v29, &v28);
          v13 = RGNOBJ::iCombine((RGNOBJ *)&v31, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v26, v35);
          if ( v13 )
          {
            v17 = v31;
            v10 = v26;
            ++*((_DWORD *)v31 + 8);
            *((_QWORD *)this + 28) = v17;
LABEL_29:
            REGION::vDeleteREGION(v10);
            RGNMEMOBJTMP::~RGNMEMOBJTMP(&v29);
            if ( v32 != 1 )
              goto LABEL_17;
            v25 = v17;
LABEL_35:
            REGION::vDeleteREGION(v25);
LABEL_17:
            if ( v27 == 1 )
              REGION::vDeleteREGION(0LL);
            return v13;
          }
          REGION::vDeleteREGION(v31);
          v10 = v26;
        }
        v17 = 0LL;
        goto LABEL_29;
      }
      REGION::vDeleteREGION(v31);
      v17 = 0LL;
    }
    v13 = 0;
    goto LABEL_29;
  }
  ++*((_DWORD *)v10 + 8);
  v13 = 2;
  *((_QWORD *)this + 28) = v10;
  return v13;
}
