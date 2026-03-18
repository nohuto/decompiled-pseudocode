/*
 * XREFs of ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AE7B0
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01B14D8 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01B217C (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AF01C (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
 *     GetPTPShellListener @ 0x1C01B3F70 (GetPTPShellListener.c)
 */

void __fastcall GestureContactProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERINFONODE *a2,
        struct tagTPSTATE *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int *a8)
{
  __int64 v9; // r11
  __int64 v10; // rcx
  struct tagTPSTATE *v11; // rbx
  unsigned int v13; // r9d
  int v14; // r10d
  int v15; // eax
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rdi
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *PTPShellListener; // rax
  __int64 v25; // rax
  char v26; // r10
  __int64 v27; // r9
  int v28; // eax
  struct tagHID_POINTER_DEVICE_INFO *v29; // [rsp+78h] [rbp+20h]

  v29 = a4;
  v9 = 0LL;
  v10 = a5;
  v11 = a3;
  if ( a5 )
    goto LABEL_17;
  v13 = *((_DWORD *)a1 + 10);
  v14 = 0;
  a3 = (struct tagTPSTATE *)*((_QWORD *)a1 + 11);
  if ( !v13 )
    goto LABEL_7;
  while ( __CFSHR__(*((_DWORD *)v11 + 480), 11) )
  {
    if ( *((_DWORD *)v11 + 409) == (unsigned int)*((unsigned __int16 *)a3 + 24) % *((_DWORD *)v11 + 411) )
      goto LABEL_5;
LABEL_14:
    a3 = (struct tagTPSTATE *)((char *)a3 + 216);
    if ( ++v14 >= v13 )
      goto LABEL_6;
  }
  v16 = *((_DWORD *)a3 + 17);
  if ( (v16 & 0x40000) != 0 || !v16 || (v16 & 0x2000) == 0 )
    goto LABEL_14;
LABEL_5:
  a2 = a3;
LABEL_6:
  v10 = 0LL;
LABEL_7:
  if ( (*((_DWORD *)v11 + 480) & 0x400) == 0 )
  {
    a4 = v29;
    goto LABEL_17;
  }
  if ( a2 )
  {
    v15 = *((_DWORD *)a2 + 17);
    a4 = v29;
    if ( v15 )
      *((_DWORD *)a2 + 17) = v15 | 0x2000;
LABEL_17:
    if ( a2 )
    {
      FixupPrimaryGestureContact(
        a2,
        (unsigned int)*((unsigned __int16 *)a2 + 24) % *((_DWORD *)v11 + 411),
        v11,
        a4,
        v10);
      v9 = 0LL;
    }
  }
  if ( !a6 )
  {
    RevalidateHitTestResult(v11);
    v9 = 0LL;
  }
  v17 = 0;
  v18 = *((_QWORD *)a1 + 11);
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 2 )
    {
      v19 = *(_WORD *)(v18 + 48);
      if ( v19 )
      {
        v20 = (unsigned int)v19 % *((_DWORD *)v11 + 411);
        v21 = (unsigned int)v20;
        if ( (struct tagPOINTERINFONODE *)v18 != a2 )
        {
          FixupSecondaryGestureContacts((struct tagPOINTERINFONODE *)v18, v20, v11, v29, a5);
          v9 = 0LL;
        }
        if ( a6 == (_DWORD)v9 )
        {
          v22 = (__int64 *)*((_QWORD *)v11 + 209);
          if ( v22 )
            v23 = *v22;
          else
            v23 = v9;
          *(_QWORD *)(v18 + 24) = v23;
          *(_DWORD *)(v18 + 212) = *((_DWORD *)v11 + 481);
        }
        else
        {
          PTPShellListener = (__int64 *)GetPTPShellListener(v10, v20, a3);
          if ( PTPShellListener )
            v25 = *PTPShellListener;
          else
            v25 = v9;
          *(_QWORD *)(v18 + 24) = v25;
        }
        v26 = v9;
        v27 = *(_QWORD *)(v18 + 136);
        if ( a6 == (_DWORD)v9 && *((_DWORD *)v11 + 415) > 2u )
        {
          a3 = (struct tagTPSTATE *)(v27 - *((_QWORD *)v11 + 233));
          v10 = 300LL * gliQpcFreq;
          v20 = 300LL * gliQpcFreq / 1000;
          if ( (unsigned __int64)a3 < v20 )
          {
            v26 = 1;
            goto LABEL_40;
          }
        }
        if ( a7 == 1 && (*(_DWORD *)(v18 + 68) & 0x40000) == 0 )
        {
LABEL_40:
          a3 = (struct tagTPSTATE *)((char *)v11 + 272 * v21);
          if ( v26 )
            goto LABEL_44;
          v28 = *((_DWORD *)a3 + 66);
          if ( (v28 & 0x8000) == 0 )
          {
            *((_DWORD *)a3 + 66) = v28 | 0x8000;
            *((_QWORD *)v11 + 231) = v27;
            goto LABEL_46;
          }
          v10 = gliQpcFreq * (unsigned int)gTPThresholds[22];
          v20 = v10 / 1000;
          if ( v27 - *((_QWORD *)v11 + 231) >= (unsigned __int64)(v10 / 1000) )
          {
LABEL_44:
            *(_DWORD *)(v18 + 68) = 0x40000;
            *((_DWORD *)a3 + 66) |= 0x10000u;
            *a8 = 1;
            if ( a6 == (_DWORD)v9 )
            {
              CleanupGestureCache(v11, v20, (__int64)a3);
              v9 = 0LL;
            }
          }
        }
      }
LABEL_46:
      v18 += 216LL;
      if ( (unsigned int)++v17 >= *((_DWORD *)a1 + 10) )
        return;
      continue;
    }
  }
}
