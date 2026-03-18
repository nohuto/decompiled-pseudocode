/*
 * XREFs of ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0007204
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockSharedOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[42]) != 0;
}
