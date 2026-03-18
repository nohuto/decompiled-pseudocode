/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C008AAEC
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C0120140 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008D05C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C008F108 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0092358 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00B1B34 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(HDEV a1, struct SFMLOGICALSURFACE *a2, int a3, int a4, int a5)
{
  HLSURF v6; // r14
  int v9; // esi
  int v10; // r15d
  __int64 Object; // rax
  __int64 v12; // rbx
  unsigned int v13; // esi
  HLSURF v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-41h] BYREF
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  int v20; // [rsp+50h] [rbp-21h]
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  int v22; // [rsp+60h] [rbp-11h]
  __int64 v23; // [rsp+68h] [rbp-9h] BYREF
  int v24; // [rsp+70h] [rbp-1h]
  __int64 v25; // [rsp+78h] [rbp+7h] BYREF
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int64 v30; // [rsp+D8h] [rbp+67h] BYREF

  v6 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ(&v23, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(&v21, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(&v19, 1LL);
  v9 = *((_DWORD *)a2 + 64);
  v25 = *((_QWORD *)a2 + 34);
  v26 = *((_DWORD *)a2 + 70);
  v27 = *((_DWORD *)a2 + 71);
  v28 = *((_QWORD *)a2 + 26);
  if ( v23 && v21 && v19 )
  {
    if ( a3 )
    {
      if ( *((_QWORD *)a2 + 17) )
      {
        v16 = *((_QWORD *)a2 + 17);
        if ( !RGNOBJ::bCopy((RGNOBJ *)&v23, (struct RGNOBJ *)&v16) )
          goto LABEL_25;
      }
      else
      {
        a3 = 0;
      }
    }
    else
    {
      v9 &= ~2u;
    }
    if ( a4 && *((_QWORD *)a2 + 11) )
    {
      v17 = *((_QWORD *)a2 + 11);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v17) )
        goto LABEL_25;
    }
    else
    {
      a4 = 0;
    }
    v10 = a5;
    if ( a5 && *((_QWORD *)a2 + 12) )
    {
      v18 = *((_QWORD *)a2 + 12);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v18) )
        goto LABEL_25;
    }
    else
    {
      v10 = 0;
    }
    Object = AllocateObject(312LL, 18LL, 1LL);
    v12 = Object;
    if ( Object
      && (unsigned int)SFMLOGICALSURFACE::Initialize(
                         Object,
                         *((_QWORD *)a2 + 34),
                         *((unsigned int *)a2 + 70),
                         *((unsigned int *)a2 + 71),
                         *((_QWORD *)a2 + 26),
                         *((_DWORD *)a2 + 74)) )
    {
      v30 = 0LL;
      *(_DWORD *)(v12 + 256) = v9;
      *(_DWORD *)(v12 + 220) = *((_DWORD *)a2 + 55);
      *(_DWORD *)(v12 + 64) = *((_DWORD *)a2 + 16);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v30, (struct OBJECT *)v12, 0x12u, 8u) )
      {
        v6 = *(HLSURF *)v12;
        v13 = (v9 & 0x10 | 0x40u) >> 4;
        if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v12, 1, v13, (struct _CD_HLSURF_CREATIONCONTEXT *)&v25) >= 0 )
          *(_QWORD *)(v12 + 24) = a1;
        if ( a3 )
        {
          *(_QWORD *)(v12 + 136) = v23;
          v23 = 0LL;
        }
        if ( a4 )
        {
          v15 = *(HLSURF *)v12;
          *(_QWORD *)(v12 + 88) = v21;
          EtwTraceLifetimeAccum(v15, 1LL);
          v21 = 0LL;
        }
        if ( v10 )
        {
          *(_QWORD *)(v12 + 96) = v19;
          v19 = 0LL;
        }
        EtwLogicalSurfCreateEvent(v6, v13);
      }
      else
      {
        bhLSurfDestroyLogicalSurfaceObject(v12, 0LL, 0LL);
      }
      if ( v30 )
        _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
    }
  }
LABEL_25:
  if ( v20 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  if ( v22 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  if ( v24 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  return v6;
}
