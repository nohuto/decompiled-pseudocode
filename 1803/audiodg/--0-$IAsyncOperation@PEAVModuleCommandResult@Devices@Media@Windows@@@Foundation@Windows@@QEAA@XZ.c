/*
 * XREFs of ??0?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@QEAA@XZ @ 0x140048718
 * Callers:
 *     ??0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ @ 0x140048E78 (--0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x140002C00 (--0IUnknown@@QEAA@XZ.c)
 */

IUnknown *__fastcall Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>(
        IUnknown *a1)
{
  IUnknown::IUnknown(a1);
  a1->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>::`vftable';
  return a1;
}
