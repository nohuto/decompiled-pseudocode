/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008C3D0
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008D05C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C008F108 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0092358 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00B1B34 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 */

HLSURF __fastcall hlsurfCreateLogicalSurfaceObject(HDEV a1, unsigned int a2, struct _CD_HLSURF_CREATIONCONTEXT *a3)
{
  __int64 Object; // rax
  HLSURF v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Object = AllocateObject(312LL, 18LL, 1LL);
  v7 = 0LL;
  v8 = Object;
  if ( Object
    && (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *(_QWORD *)a3,
                       *((unsigned int *)a3 + 2),
                       *((unsigned int *)a3 + 3),
                       *((_QWORD *)a3 + 2),
                       1) )
  {
    v10 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v10, (struct OBJECT *)v8, 0x12u, 8u) )
    {
      v7 = *(HLSURF *)v8;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v8, 1, a2, a3) >= 0 )
        *(_QWORD *)(v8 + 24) = a1;
      EtwLogicalSurfCreateEvent(v7, a2);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject(v8, 0LL, 0LL);
    }
    if ( v10 )
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
  }
  return v7;
}
