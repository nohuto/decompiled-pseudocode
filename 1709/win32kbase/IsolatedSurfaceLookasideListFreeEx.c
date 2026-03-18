/*
 * XREFs of IsolatedSurfaceLookasideListFreeEx @ 0x1C00AA110
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0042578 (-FreeType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall IsolatedSurfaceLookasideListFreeEx(__int64 Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  if ( *gpTypeIsolation )
    NSInstrumentation::CTypeIsolation<163840,640>::FreeType(*gpTypeIsolation, Buffer);
}
