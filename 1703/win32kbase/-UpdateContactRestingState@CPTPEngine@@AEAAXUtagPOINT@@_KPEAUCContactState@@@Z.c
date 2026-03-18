/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0138634
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C01364C8 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013804C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct tagPOINT a2,
        __int64 a3,
        struct CContactState *a4)
{
  struct CContactState *v4; // r11
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r14
  int v9; // eax
  int v10; // esi
  unsigned int v11; // edi
  char v12; // cl
  unsigned __int8 v13; // bp
  struct CContactState *v14; // rdx
  CPTPEngine *v15; // rcx
  struct tagPOINT v16; // r10
  struct CContactState *v17; // rdx
  LONG v18; // r9d
  __int64 v19; // rax
  int v20; // r8d
  unsigned int v21; // ecx
  unsigned __int64 v22; // r8
  struct CContactState *v23; // rdx
  struct CContactState *i; // r10
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  int v28; // eax
  CPTPEngine *v29; // rcx
  struct CContactState *v30; // r10
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v4 = a4;
  v7 = a3 - *((_QWORD *)a4 + 12);
  v8 = a3 - *((_QWORD *)v4 + 9);
  v9 = *(_DWORD *)v4;
  v10 = -__CFSHR__(*(_DWORD *)v4, 9);
  v11 = 0;
  if ( *((_DWORD *)this + 733) != 6 || (v12 = 1, __CFSHR__(*(_DWORD *)v4, 9)) )
    v12 = 0;
  if ( (v9 & 0x400) == 0 && !v12 )
  {
    if ( (v9 & 0x200) == 0 && v8 && !*((_DWORD *)v4 + 36) )
      *(_DWORD *)v4 = v9 | 0x200;
    if ( v7 >= *((_QWORD *)this + 12) * (unsigned __int64)(*((_DWORD *)this + 44) / 0xAu) / 0x3E8 || !v8 )
    {
      if ( a2.y >= *((_DWORD *)this + 787) || (v13 = 0, (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, a2)) )
        v13 = 1;
      v14 = v4;
      v15 = this;
      if ( v8 )
      {
        CPTPEngine::SetContactRestingState(this, v4, 0);
        if ( *((_DWORD *)this + 733) == 2 )
        {
          if ( v10 )
          {
            v17 = (CPTPEngine *)((char *)this + 288 * *((unsigned int *)this + 724) + 1168);
            if ( v4 != v17 && (*(_DWORD *)v17 & 0x100) == 0 && (v13 || *((_QWORD *)v4 + 9) < *((_QWORD *)v17 + 13)) )
              CPTPEngine::SetContactRestingState(this, v4, 1);
          }
        }
        v18 = y;
        if ( y < *((_DWORD *)this + 787) && (!(unsigned int)CPTPEngine::PointInsideCurtainRegion(this, v16) || !v10) )
          goto LABEL_33;
        v19 = (*(_DWORD *)v4 & 0x200) != 0 ? *((unsigned int *)v4 + 36) : 0LL;
        if ( (int)((HIDWORD(*(_QWORD *)((char *)v4 + 8 * v19 + 156)) - v18)
                 * (HIDWORD(*(_QWORD *)((char *)v4 + 8 * v19 + 156)) - v18)
                 + (*(_QWORD *)((char *)v4 + 8 * v19 + 156) - v16.x) * (*(_QWORD *)((char *)v4 + 8 * v19 + 156) - v16.x)) > (unsigned __int64)*((unsigned int *)this + 43) )
          goto LABEL_33;
        v20 = 1;
        v14 = v4;
        v15 = this;
      }
      else
      {
        v20 = v13;
      }
      CPTPEngine::SetContactRestingState(v15, v14, v20);
LABEL_33:
      *(struct tagPOINT *)((char *)v4 + 8 * *((unsigned int *)v4 + 36) + 156) = v16;
      v21 = *((_DWORD *)v4 + 36) + 1;
      *((_QWORD *)v4 + 12) = a3;
      *((_DWORD *)v4 + 36) = v21 % 0xA;
    }
  }
  v22 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 44) / 0x3E8;
  if ( *((_DWORD *)this + 733) == 1 && v10 && (*(_DWORD *)v4 & 4) != 0 && v8 < v22 )
  {
    while ( v11 < 6 )
    {
      v23 = (CPTPEngine *)((char *)this + 288 * v11 + 1168);
      if ( v4 != v23 && (*(_DWORD *)v23 & 1) != 0 && ((*(_DWORD *)v23 & 0x100) == 0 || a3 - *((_QWORD *)v23 + 9) < v22) )
        goto LABEL_45;
      ++v11;
    }
    CPTPEngine::SetContactRestingState(this, v4, 0);
  }
LABEL_45:
  for ( i = (CPTPEngine *)((char *)this + 1168);
        i != (CPTPEngine *)((char *)this + 2896);
        i = (struct CContactState *)((char *)i + 288) )
  {
    if ( (*(_DWORD *)i & 1) != 0 && i != v4 && ((*(_DWORD *)i & 0x100) != 0 || (*(_DWORD *)v4 & 0x100) != 0) )
    {
      v25 = *((_QWORD *)i + 9);
      v26 = *((_QWORD *)v4 + 9);
      if ( v25 <= v26 )
        v27 = v26 - v25;
      else
        v27 = v25 - v26;
      if ( v27 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 87) / 0x3E8 )
      {
        v28 = *((_DWORD *)this + 787);
        if ( *((_DWORD *)v4 + 2) >= v28
          && *((_DWORD *)i + 2) >= v28
          && (int)((HIDWORD(*(_QWORD *)((char *)v4 + 4)) - HIDWORD(*(_QWORD *)((char *)i + 4)))
                 * (HIDWORD(*(_QWORD *)((char *)v4 + 4)) - HIDWORD(*(_QWORD *)((char *)i + 4)))
                 + (*(_QWORD *)((char *)v4 + 4) - *(_QWORD *)((char *)i + 4))
                 * (*(_QWORD *)((char *)v4 + 4) - *(_QWORD *)((char *)i + 4))) <= (unsigned __int64)*((unsigned int *)this + 73) )
        {
          CPTPEngine::SetContactRestingState(this, v4, 0);
          CPTPEngine::SetContactRestingState(v29, v30, 0);
          *(_DWORD *)v4 |= 0x400u;
          *(_DWORD *)i |= 0x400u;
        }
      }
    }
  }
}
