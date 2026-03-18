/*
 * XREFs of ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00A02E8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009F8A0 (hsurfCreateCompatibleSurface.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00A0420 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall hsurfSpCreateSurface(__int64 a1, struct tagSIZE *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // r8
  __int64 CompatibleSurface; // rax
  __int64 v10; // [rsp+80h] [rbp-49h] BYREF
  char v11; // [rsp+88h] [rbp-41h]
  int v12; // [rsp+8Ch] [rbp-3Dh]
  int v13; // [rsp+90h] [rbp-39h] BYREF
  __int64 v14; // [rsp+94h] [rbp-35h]
  _BYTE v15[20]; // [rsp+9Ch] [rbp-2Dh]
  _BYTE v16[80]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v17; // [rsp+130h] [rbp+67h] BYREF

  v2 = 0LL;
  v17 = a1;
  v5 = 0LL;
  if ( (!gfEnableDeviceBitmapsForNonHintedShapes || !g_pDwmState || !gfDwmDeviceBitmapsEnabled)
    && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v17) )
  {
    v6 = 0;
LABEL_4:
    v14 = 0LL;
    *(_QWORD *)&v15[8] = 0LL;
    *(_QWORD *)v15 = 0LL;
    v14 = (__int64)*a2;
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    *(_QWORD *)&v15[12] = 2049LL;
    v13 = 6;
    *(_QWORD *)&v15[4] = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v10, (struct _DEVBITMAPINFO *)&v13, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      LOBYTE(v7) = 5;
      *(_QWORD *)(v10 + 48) = a1;
      v11 |= 1u;
      HmgSetOwner(*(_QWORD *)(v10 + 32), 0LL, v7);
      *(_DWORD *)(v10 + 112) |= 0x800u;
      if ( v10 )
        v2 = v10 + 24;
      v5 = *(_QWORD *)(v2 + 8);
      EtwPhysicalSurfCreateEvent(v5, 0LL, 0LL, v6);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v10);
    return v5;
  }
  v6 = 1;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v17);
  CompatibleSurface = hsurfCreateCompatibleSurface(a1, 6u, 0LL, a2->cx, a2->cy, 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
  v5 = CompatibleSurface;
  if ( CompatibleSurface
    && (!(unsigned int)GreSetBitmapOwner(CompatibleSurface, 0LL) || !(unsigned int)GreMarkUndeletableBitmap(v5)) )
  {
    GreMarkDeletableBitmap(v5);
    GreDeleteObject(v5);
    v5 = 0LL;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  if ( !v5 )
    goto LABEL_4;
  return v5;
}
