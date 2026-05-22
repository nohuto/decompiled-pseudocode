/*
 * XREFs of ?Dispose@PropertyNode@Input@@UEAAXXZ @ 0x180016A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Input::PropertyNode::Dispose(Input::PropertyNode *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
