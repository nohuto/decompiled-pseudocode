/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00C3D60
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C004E960 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ldevUnloadImage @ 0x1C0052F40 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  int v2; // r8d
  struct PDEV *v3; // rbx
  struct tagGRAPHICS_DEVICE *v4; // r8
  struct tagGRAPHICS_DEVICE *v5; // rbx
  __int64 v6; // rcx
  struct _LDEV *v7; // [rsp+30h] [rbp+8h]
  struct PDEV *v8; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v3 = gppdevList;
    if ( !gppdevList )
      break;
    PDEV::InitializeClientReferenceCount(gppdevList);
    *((_DWORD *)v3 + 3) = 1;
    v8 = v3;
    PDEVOBJ::vUnreferencePdev(&v8, 2, v2);
  }
  v4 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    do
    {
      v5 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v4 + 16);
      if ( (*((_DWORD *)v4 + 40) & 0x4000000) != 0 )
      {
        v6 = *((_QWORD *)v4 + 35);
        if ( v6 )
        {
          LOBYTE(a2) = 1;
          ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C01A1B98)(v6, a2, *((_QWORD *)v4 + 36));
        }
      }
      v4 = v5;
    }
    while ( v5 );
  }
  if ( qword_1C01A17D0 )
    qword_1C01A17D0(qword_1C01A17C0);
  memset(&gDxgkInterface, 0, 0x890uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  while ( 1 )
  {
    v7 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage((__int64)v7);
  }
}
