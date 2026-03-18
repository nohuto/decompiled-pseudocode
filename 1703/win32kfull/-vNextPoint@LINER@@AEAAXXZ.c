/*
 * XREFs of ?vNextPoint@LINER@@AEAAXXZ @ 0x1C01203BC
 * Callers:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0120558 (-vNextEvent@LINER@@QEAAXXZ.c)
 * Callees:
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C011F4FC (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C0120630 (-bNextFigure@READER@@IEAAHXZ.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C012068C (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall LINER::vNextPoint(LINER *this)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  BEZIER32 *v8; // rcx
  struct _POINTFIX *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  struct _RECTFX *v12; // r8
  struct _POINTFIX *v13; // rdx
  BEZIER32 *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // xmm1_8
  struct _POINTFIX v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v21; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v22; // [rsp+38h] [rbp-18h] BYREF

  v2 = 328LL;
  v3 = *((_DWORD *)this + 126);
  if ( *((LINER **)this + 88) == (LINER *)((char *)this + 328) )
    v2 = 416LL;
  *((_QWORD *)this + 89) = (char *)this + v2;
  if ( v3 < 0 )
    goto LABEL_9;
  if ( v3 > 1 )
  {
    switch ( v3 )
    {
      case 2:
        *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
        *((_QWORD *)this + 89) = (char *)this + 240;
        if ( (unsigned int)READER::bNextFigure(this) )
        {
          READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
          *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
          *((_DWORD *)this + 126) = 1;
        }
        else
        {
          *((_DWORD *)this + 126) = 4;
        }
        break;
      case 3:
        v8 = (LINER *)((char *)this + 48);
        *((_DWORD *)this + 172) = 4;
        v9 = (struct _POINTFIX *)((char *)this + 224);
        if ( *((_DWORD *)this + 54) )
          v10 = BEZIER32::bNext(v8, v9);
        else
          v10 = BEZIER64::bNext(v8, v9);
        if ( !v10 )
        {
          *((_DWORD *)this + 126) = 0;
          v11 = *((_QWORD *)this + 89);
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 40) = *((_DWORD *)this + 56);
          *(_DWORD *)(v11 + 44) = *((_DWORD *)this + 57);
          *(_DWORD *)(v11 + 40) -= *((_DWORD *)this + 173);
          *(_DWORD *)(v11 + 44) -= *((_DWORD *)this + 174);
          *(_QWORD *)(v11 + 48) = *(_QWORD *)(v11 + 40);
          v5 = *((_QWORD *)this + 89);
          v6 = *((_QWORD *)this + 70);
          goto LABEL_10;
        }
LABEL_9:
        v5 = *((_QWORD *)this + 89);
        *(_DWORD *)v5 = 0;
        *(_DWORD *)(v5 + 40) = *((_DWORD *)this + 56);
        *(_DWORD *)(v5 + 44) = *((_DWORD *)this + 57);
        *(_DWORD *)(v5 + 40) -= *((_DWORD *)this + 173);
        *(_DWORD *)(v5 + 44) -= *((_DWORD *)this + 174);
        v6 = *(_QWORD *)(v5 + 40);
LABEL_10:
        *(_QWORD *)(v5 + 48) = v6;
        return;
      case 4:
        *((_DWORD *)this + 172) = 9;
        break;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    if ( v3 )
    {
      *((_DWORD *)this + 172) = 0;
      *((_DWORD *)this + 126) = 0;
    }
    else
    {
      *((_DWORD *)this + 172) = 3;
    }
    v4 = (__int64 *)((char *)this + 224);
    if ( (unsigned int)READER::bNextPoint(this, (struct _POINTFIX *)this + 28) )
    {
      if ( (*((_DWORD *)this + 2) & 0x10) == 0 )
        goto LABEL_9;
      v19 = *(struct _POINTFIX *)((char *)this + 692);
      v20 = *v4;
      READER::bNextPoint(this, &v21);
      READER::bNextPoint(this, &v22);
      BEZIER::vInit((LINER *)((char *)this + 48), &v19, v12, gpeqErrorLow);
      v13 = (struct _POINTFIX *)((char *)this + 224);
      v14 = (LINER *)((char *)this + 48);
      if ( *((_DWORD *)this + 54) )
        v15 = BEZIER32::bNext(v14, v13);
      else
        v15 = BEZIER64::bNext(v14, v13);
      v16 = *((_QWORD *)this + 89);
      *(_DWORD *)v16 = 0;
      *(_DWORD *)(v16 + 40) = *(_DWORD *)v4;
      *(_DWORD *)(v16 + 44) = *((_DWORD *)this + 57);
      *(_DWORD *)(v16 + 40) -= *((_DWORD *)this + 173);
      *(_DWORD *)(v16 + 44) -= *((_DWORD *)this + 174);
      *(_QWORD *)(v16 + 48) = *(_QWORD *)(v16 + 40);
      if ( v15 )
      {
        v17 = *((_QWORD *)this + 89);
        *(_OWORD *)((char *)this + 600) = *(_OWORD *)v17;
        *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v17 + 16);
        *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v17 + 32);
        *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v17 + 48);
        *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v17 + 64);
        v18 = *(_QWORD *)(v17 + 80);
        LODWORD(v17) = v20;
        *((_QWORD *)this + 85) = v18;
        *((_QWORD *)this + 81) = __PAIR64__(HIDWORD(v20), v17);
        *((_DWORD *)this + 162) -= v19.x;
        *((_DWORD *)this + 163) -= v19.y;
        *((_DWORD *)this + 128) = 0;
        *((struct _POINTFIX *)this + 69) = v22;
        *((_DWORD *)this + 138) -= v21.x;
        *((_DWORD *)this + 139) -= v21.y;
        *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
        *((_QWORD *)this + 89) = (char *)this + 600;
        *((_DWORD *)this + 126) = 3;
      }
      else
      {
        *((_DWORD *)this + 126) = 0;
      }
    }
    else
    {
      *v4 = *((_QWORD *)this + 29);
      v7 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 126) = 2;
      if ( (v7 & 8) != 0 )
      {
        *((_DWORD *)this + 172) = 3;
        goto LABEL_9;
      }
      *((_DWORD *)this + 172) = 1;
    }
  }
}
