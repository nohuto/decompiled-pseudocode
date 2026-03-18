/*
 * XREFs of ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AC22C
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01ABABC (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01ABCE4 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall UpdateContactRestingState(
        struct tagPOINT a1,
        __int64 a2,
        struct tagTPCONTACTSTATE *a3,
        struct tagTPSTATE *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  char v11; // cl
  int v12; // eax
  __int64 v13; // r9
  _QWORD *v14; // r11
  int v15; // esi
  struct tagPOINT v16; // r10
  LONG v17; // r8d
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  int v20; // edx
  unsigned int v21; // r8d
  struct tagTPCONTACTSTATE *v22; // rcx
  int v23; // r8d
  unsigned int v24; // ecx
  _DWORD *v25; // r10
  struct tagTPCONTACTSTATE *v26; // rsi
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  int v30; // eax
  int v31; // r8d
  int v32; // edx
  struct tagTPSTATE *v33; // rdx
  LONG y; // [rsp+54h] [rbp+Ch]

  y = a1.y;
  v9 = a2 - *((_QWORD *)a3 + 9);
  v10 = a2 - *((_QWORD *)a3 + 7);
  if ( *((_DWORD *)a4 + 416) != 6 || (v11 = 1, (*((_DWORD *)a3 + 66) & 0x80u) != 0) )
    v11 = 0;
  v12 = *((_DWORD *)a3 + 66);
  v13 = 0x20C49BA5E353F7CFLL;
  v14 = (_QWORD *)gliQpcFreq;
  if ( (v12 & 0x200) == 0 && !v11 )
  {
    if ( (v12 & 0x100) == 0 && v10 && !*((_DWORD *)a3 + 31) )
      *((_DWORD *)a3 + 66) = v12 | 0x100;
    if ( v9 >= gliQpcFreq * (gTPThresholds[17] / 0xAu) / 1000LL || !v10 )
    {
      if ( v10 )
      {
        v15 = -__CFSHR__(*((_DWORD *)a3 + 66), 8);
        SetContactRestingState(a3, a4, 0);
        v17 = y;
        if ( y >= *((_DWORD *)a4 + 471) && (v15 || *((_DWORD *)a4 + 415) == 1 && !*((_DWORD *)a4 + 414))
          || PointInsideCurtainRegion(v16, a5) && v15 )
        {
          v18 = (*((_DWORD *)a3 + 66) & 0x100) != 0 ? *((unsigned int *)a3 + 31) : 0LL;
          if ( (int)((*((_QWORD *)a3 + v18 + 17) - v16.x) * (*((_QWORD *)a3 + v18 + 17) - v16.x)
                   + (HIDWORD(*((_QWORD *)a3 + v18 + 17)) - v17) * (HIDWORD(*((_QWORD *)a3 + v18 + 17)) - v17)) <= (unsigned __int64)(unsigned int)gTPThresholds[16] )
            SetContactRestingState(a3, a4, 1);
        }
        v19 = *v14 * (unsigned int)gTPThresholds[17] / 1000LL;
        if ( *((_DWORD *)a4 + 416) != 1 || !v15 || (*((_DWORD *)a3 + 66) & 4) == 0 || v10 >= v19 )
          goto LABEL_41;
        v20 = 1;
        v21 = 0;
        do
        {
          if ( v21 >= 6 )
            break;
          v22 = (struct tagTPSTATE *)((char *)a4 + 272 * v21);
          if ( a3 != v22 && (*((_DWORD *)v22 + 66) & 1) != 0 && a2 - *((_QWORD *)v22 + 7) < v19 )
            v20 = 0;
          ++v21;
        }
        while ( v20 );
        if ( !v20 )
          goto LABEL_41;
        v23 = 0;
      }
      else
      {
        if ( a1.y < *((_DWORD *)a4 + 471) && !PointInsideCurtainRegion(a1, a5) )
          goto LABEL_42;
        v23 = 1;
      }
      SetContactRestingState(a3, a4, v23);
LABEL_41:
      v13 = 0x20C49BA5E353F7CFLL;
LABEL_42:
      *((struct tagPOINT *)a3 + *((unsigned int *)a3 + 31) + 17) = v16;
      v24 = *((_DWORD *)a3 + 31) + 1;
      *((_QWORD *)a3 + 9) = a2;
      *((_DWORD *)a3 + 31) = v24 % 0xA;
    }
  }
  v25 = (_DWORD *)((char *)a4 + 264);
  do
  {
    if ( (*v25 & 1) != 0 )
    {
      v26 = (struct tagTPCONTACTSTATE *)(v25 - 66);
      if ( v25 - 66 != (_DWORD *)a3 && ((*v25 & 0x80u) != 0 || (*((_DWORD *)a3 + 66) & 0x80u) != 0) )
      {
        v27 = *((_QWORD *)v25 - 26);
        v28 = *((_QWORD *)a3 + 7);
        if ( v27 <= v28 )
          v29 = v28 - v27;
        else
          v29 = v27 - v28;
        if ( v29 < ((unsigned __int64)((unsigned __int128)(300LL * *v14 * (__int128)v13) >> 64) >> 63)
                 + ((__int64)((unsigned __int128)(300LL * *v14 * (__int128)v13) >> 64) >> 7) )
        {
          v30 = *((_DWORD *)a4 + 471);
          if ( *((_DWORD *)a3 + 1) >= v30 && *(v25 - 65) >= v30 )
          {
            v31 = *(_QWORD *)a3 - *(_QWORD *)v26;
            v32 = HIDWORD(*(_QWORD *)a3) - HIDWORD(*(_QWORD *)v26);
            if ( v31 * v31 + v32 * v32 <= (unsigned __int64)(unsigned int)gTPThresholds[46] )
            {
              SetContactRestingState(a3, a4, 0);
              SetContactRestingState(v26, v33, 0);
              *((_DWORD *)a3 + 66) |= 0x200u;
              *v25 |= 0x200u;
            }
          }
        }
      }
    }
    v25 += 68;
    v13 = 0x20C49BA5E353F7CFLL;
  }
  while ( v25 - 66 != (_DWORD *)((char *)a4 + 1632) );
}
