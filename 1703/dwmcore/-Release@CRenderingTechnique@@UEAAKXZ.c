/*
 * XREFs of ?Release@CRenderingTechnique@@UEAAKXZ @ 0x180016A70
 * Callers:
 *     ??1CBrushRenderingEffect@@UEAA@XZ @ 0x180016290 (--1CBrushRenderingEffect@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderingTechnique::Release(CRenderingTechnique *this)
{
  CMILRefCountBase *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CMILRefCountBase *)*((_QWORD *)this + 1);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 8LL);
  if ( (char *)v2 == (char *)CMILRefCountBase::Release )
    return CMILRefCountBase::Release(v1);
  else
    return v2();
}
