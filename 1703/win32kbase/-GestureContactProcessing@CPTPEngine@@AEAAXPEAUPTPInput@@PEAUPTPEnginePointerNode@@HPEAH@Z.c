/*
 * XREFs of ?GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z @ 0x1C0135DD0
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z @ 0x1C0135618 (-DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z.c)
 * Callees:
 *     ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368 (-CleanupGestureState@CPTPEngine@@AEAAXXZ.c)
 *     ?FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135B24 (-FixupPrimaryGestureContact@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z @ 0x1C0135C74 (-FixupSecondaryGestureContacts@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@IH@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 */

void __fastcall CPTPEngine::GestureContactProcessing(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct PTPEnginePointerNode *a3,
        unsigned int a4,
        int *a5)
{
  unsigned int v5; // r11d
  char *v6; // rbp
  _DWORD *v7; // rdi
  int v8; // esi
  char *v13; // r10
  __int64 v14; // r8
  unsigned int v15; // r9d
  char *i; // rcx
  bool v17; // zf
  char v18; // r10
  bool v19; // r9
  char v20; // bp
  char v21; // r14
  struct PTPEnginePointerNode *v22; // rdi
  unsigned int j; // r15d
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  char v29; // [rsp+70h] [rbp+8h]

  v5 = *((_DWORD *)a2 + 12);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v13 = (char *)a2 + 52;
  if ( v5 )
  {
    v14 = v5;
    do
    {
      v7 = (_DWORD *)((char *)this + 288 * (unsigned int)(*((_DWORD *)v13 + 1) % *((_DWORD *)this + 4)) + 1168);
      if ( (*v7 & 1) != 0 && (*v7 & 0x800) == 0 )
      {
        ++v8;
        v6 = v13;
      }
      v13 += 96;
      --v14;
    }
    while ( v14 );
  }
  v15 = 0;
  for ( i = (char *)a2 + 52; v15 < v5; ++v15 )
  {
    if ( __CFSHR__(*((_DWORD *)this + 805), 14) )
    {
      if ( *((_DWORD *)this + 725) != *((_DWORD *)i + 1) % *((_DWORD *)this + 4) )
        goto LABEL_13;
      v17 = *((_DWORD *)i + 3) == 0;
    }
    else
    {
      v17 = (*((_DWORD *)i + 3) & 0x2000) == 0;
    }
    if ( !v17 )
    {
      a3 = (struct PTPEnginePointerNode *)i;
      break;
    }
LABEL_13:
    i += 96;
  }
  if ( (*((_DWORD *)this + 805) & 0x2000) != 0 && a3 )
    *((_DWORD *)a3 + 3) |= 0x2000u;
  v18 = 0;
  v19 = !a4
     && *((_DWORD *)this + 730) > 2u
     && *(_QWORD *)a2 - *((_QWORD *)this + 391) < *((_QWORD *)this + 12)
                                                * (unsigned __int64)*((unsigned int *)this + 87)
                                                / 0x3E8;
  if ( v8 != 1 || (*((_DWORD *)v6 + 3) & 0x40000) != 0 )
  {
    v29 = 0;
    v20 = 1;
  }
  else
  {
    v29 = 1;
    if ( (*v7 & 0x10000) == 0 )
    {
      *v7 |= 0x10000u;
      *((_QWORD *)this + 389) = *(_QWORD *)a2;
    }
    if ( *(_QWORD *)a2 - *((_QWORD *)this + 389) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 49)
                                                  / 0x3E8 )
    {
      *v7 &= ~0x10000u;
      v18 = 1;
    }
    v20 = 1;
    if ( v18 )
      goto LABEL_31;
  }
  if ( v19 )
  {
LABEL_31:
    v21 = 1;
    goto LABEL_32;
  }
  v21 = 0;
LABEL_32:
  v22 = (struct PTPInput *)((char *)a2 + 52);
  for ( j = 0; j < *((_DWORD *)a2 + 12); ++j )
  {
    v24 = (unsigned int)(*((_DWORD *)v22 + 1) % *((_DWORD *)this + 4));
    v25 = 288 * v24;
    v26 = *((_DWORD *)this + 72 * (unsigned int)v24 + 292);
    if ( (v26 & 1) != 0 )
    {
      if ( v21 && (v26 & 0x800) == 0 )
      {
        if ( (*((_DWORD *)v22 + 3) & 0x10000) != 0 )
        {
          *(_DWORD *)((char *)this + v25 + 1168) = v26 | 0x800;
        }
        else
        {
          v27 = 270336;
          if ( v22 != a3 )
            v27 = 0x40000;
          *((_DWORD *)v22 + 3) = v27;
          *(_DWORD *)((char *)this + v25 + 1168) |= 0x20000u;
        }
      }
      if ( v22 == a3 )
        CPTPEngine::FixupPrimaryGestureContact(this, a2, v22, v24, 0);
      else
        CPTPEngine::FixupSecondaryGestureContacts(this, v22, v24, 0);
      v28 = *(_DWORD *)((char *)this + v25 + 1168);
      if ( (v28 & 0x800) == 0 )
      {
        v20 = 0;
        if ( !v29 )
          *(_DWORD *)((char *)this + v25 + 1168) = v28 & 0xFFFEFFFF;
      }
    }
    else
    {
      *((_QWORD *)v22 + 5) = 0LL;
    }
    v22 = (struct PTPEnginePointerNode *)((char *)v22 + 96);
  }
  if ( !v21 && !v20 || (*a5 = 1, CPTPEngine::CleanupGestureState(this), !v20) )
    CBasePTPEngine::SendGestureOutput(this, 3LL, a4, *((unsigned int *)a2 + 12), (char *)a2 + 52);
}
